// Unless explicitly stated otherwise all files in this repository are licensed
// under the Apache License Version 2.0.
// This product includes software developed at Datadog (https://www.datadoghq.com/).
// Copyright 2019 Datadog, Inc.
#ifndef DATADOG_AGENT_SIX_DATADOG_AGENT_H
#define DATADOG_AGENT_SIX_DATADOG_AGENT_H
#include <Python.h>
#include <six_types.h>

#ifdef DATADOG_AGENT_THREE
PyMODINIT_FUNC PyInit_datadog_agent(void);
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef DATADOG_AGENT_TWO
void Py2_init_datadog_agent();
#endif

void _set_get_version_cb(cb_get_version_t);
void _set_get_config_cb(cb_get_config_t);
void _set_headers_cb(cb_headers_t);

#ifdef __cplusplus
}
#endif

#endif
