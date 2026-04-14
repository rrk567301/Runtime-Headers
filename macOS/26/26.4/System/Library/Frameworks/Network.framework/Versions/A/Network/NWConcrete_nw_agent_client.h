@class NSString, NSObject;
@protocol OS_nw_path_evaluator, OS_nw_group_descriptor, OS_nw_path_flow_registration, OS_nw_context, OS_nw_parameters, OS_nw_endpoint, OS_nw_channel, OS_nw_browse_descriptor, OS_nw_advertise_descriptor, OS_nw_path;

@interface NWConcrete_nw_agent_client : NSObject <OS_nw_agent_client> {
    unsigned char client_uuid[16];
    char log_string[8];
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_path> *path;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;
    NSObject<OS_nw_group_descriptor> *group_descriptor;
    NSObject<OS_nw_channel> *channel;
    NSObject<OS_nw_context> *client_context;
    struct retained_ptr<nw_protocol *> { struct nw_protocol *m_obj; unsigned char m_should_release : 1; unsigned char __pad_bits : 7; unsigned char __pad_bytes[7]; } framer_protocol;
    NSObject<OS_nw_path_flow_registration> *flow_registration;
    NSObject<OS_nw_path_evaluator> *path_evaluator;
    unsigned int assert_count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
