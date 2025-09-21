@class NSString, NSUUID, NEPolicySession;

@interface NWConcrete_nw_migration_helper : NSObject <OS_nw_migration_helper> {
    NSUUID *agentUUID;
    NEPolicySession *session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
