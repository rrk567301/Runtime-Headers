@interface ASCredentialIdentityStoreState : NSObject

@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) char supportsIncrementalUpdates;

- (id)description;
- (id)initWithEnabledState:(char)a0 supportsIncrementalUpdates:(char)a1;

@end
