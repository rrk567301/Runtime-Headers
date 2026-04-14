@class NSString;

@interface LNRuntimeAssertionsTakingConnectionOperation : LNInterfaceConnectionOperation <LNRuntimeAssertionsTaking>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acquireRuntimeAssertions;
- (id)initWithIdentifier:(id)a0 connectionInterface:(id)a1 systemProtocols:(id)a2 priority:(long long)a3 activity:(id /* block */)a4;
- (void)invalidateRuntimeAssertions;

@end
