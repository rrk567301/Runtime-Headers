@class NSString, NSObject;
@protocol OS_nw_endpoint, OS_nw_interface;

@interface NWConcrete_nw_quic_migration_info : NSObject <OS_nw_quic_migration_info> {
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_nw_endpoint> *remote_endpoint;
    unsigned char random_connection_id : 1;
    unsigned long flags : 63;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
