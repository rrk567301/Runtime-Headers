@class NSString, NSObject;
@protocol OS_nw_endpoint, OS_nw_interface;

@interface NWConcrete_nw_quic_migration_info : NSObject <OS_nw_quic_migration_info> {
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_nw_endpoint> *remote_endpoint;
    unsigned long long flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
