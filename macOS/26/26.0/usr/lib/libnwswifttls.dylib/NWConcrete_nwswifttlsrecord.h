@class NSString, _TtC10nwswifttls17STLSRecordHandler, NSData, NSObject, NSMutableArray;
@protocol OS_nw_frame, OS_dispatch_data, OS_nw_protocol_metadata, OS_nw_protocol_options, OS_nw_parameters, OS_dispatch_queue;

@interface NWConcrete_nwswifttlsrecord : NSObject <OS_nwswifttlsrecord> {
    void *internal_reference;
    NSObject<OS_nw_protocol_options> *options;
    NSObject<OS_nw_protocol_metadata> *metadata;
    NSObject<OS_nw_parameters> *parameters;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } input_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } output_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } read_frame_array;
    struct nw_frame_array_s { struct nw_frame *tqh_first; struct nw_frame **tqh_last; } finalized_output_frame_array;
    _TtC10nwswifttls17STLSRecordHandler *record_handler;
    NSObject<OS_nw_frame> *current_input_frame;
    unsigned int claimed_input_bytes;
    int application_transport;
    unsigned long long handshake_start;
    unsigned long long handshake_end;
    NSMutableArray *spki;
    NSMutableArray *application_protocols;
    NSObject<OS_dispatch_data> *session_state;
    unsigned char new_session_ticket_request;
    unsigned char resumed_session_ticket_request;
    unsigned short fixed_key_exchange_group;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *private_key;
    NSData *pakeContext;
    NSData *pakeClientIdentity;
    NSData *pakeServerIdentity;
    NSData *pakePasswordVerifier;
    NSMutableArray *external_pre_shared_keys;
    id /* block */ external_psk_selection_block;
    NSObject<OS_dispatch_queue> *external_psk_selection_queue;
    BOOL raw_epsks_enabled;
    int state;
    int stack_error;
    BOOL external_frames;
    BOOL input_available_unacknowledged;
    BOOL input_suspended;
    BOOL deferred_input_finished;
    BOOL servicing_reads;
    BOOL servicing_handshake;
    BOOL server;
    BOOL sent_error;
    char log_str[84];
}

@property BOOL enable_early_data;
@property (retain) NSString *server_name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
