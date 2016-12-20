/*
 * Copyright (C) 2016 BlueKitchen GmbH
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holders nor the names of
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 * 4. Any redistribution, use, or modification is done solely for
 *    personal benefit and not for any commercial purpose or for
 *    monetary gain.
 *
 * THIS SOFTWARE IS PROVIDED BY BLUEKITCHEN GMBH AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL MATTHIAS
 * RINGWALD OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * Please inquire about commercial licensing options at 
 * contact@bluekitchen-gmbh.com
 *
 */

/*
 * avdtp_acp.h
 * 
 * Audio/Video Distribution Transport Protocol - Acceptor Role
 *
 */

#ifndef __AVDTP_ACP_H
#define __AVDTP_ACP_H

#include <stdint.h>

#if defined __cplusplus
extern "C" {
#endif

int  avdtp_acceptor_stream_config_subsm(avdtp_connection_t * connection, avdtp_stream_endpoint_t * stream_endpoint, uint8_t *packet, uint16_t size);
int  avdtp_acceptor_stream_config_subsm_run(avdtp_connection_t * connection, avdtp_stream_endpoint_t * stream_endpoint);

int avdtp_acceptor_send_response_reject_with_error_code(uint16_t cid, avdtp_signal_identifier_t identifier, uint8_t error_code, uint8_t transaction_label);
int avdtp_acceptor_send_response_reject_service_category(uint16_t cid,  avdtp_signal_identifier_t identifier, uint8_t category, uint8_t error_code, uint8_t transaction_label);

#if defined __cplusplus
}
#endif

#endif // __AVDTP_ACP_H