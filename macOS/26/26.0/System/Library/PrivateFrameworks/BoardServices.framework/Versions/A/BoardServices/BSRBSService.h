@class NSString, NSMutableDictionary, NSDictionary, RBSService;

@interface BSRBSService : NSObject <RBSServiceDelegate, BSDebugDescriptionProviding> {
    RBSService *_underlying;
    NSMutableDictionary *_lock_inheritanceToEndpoint;
    NSMutableDictionary *_lock_endpointToInheritances;
    NSMutableDictionary *_lock_serviceIdentifierToEndpoints;
    NSMutableDictionary *_lock_serviceIdentifierToMonitors;
    NSDictionary *_lock_machNameToLaunchIdentifiers;
    NSMutableDictionary *_callOutLock_serviceIdentifierToEndpointsToEnvironments;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _callOutLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)debugDescription;
+ (id)_sharedTestInstance;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (void)service:(id)a0 didReceiveInheritances:(id)a1;
- (void)service:(id)a0 didLoseInheritances:(id)a1;

@end
