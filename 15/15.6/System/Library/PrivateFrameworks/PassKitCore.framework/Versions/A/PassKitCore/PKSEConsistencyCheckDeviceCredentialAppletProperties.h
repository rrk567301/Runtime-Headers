@interface PKSEConsistencyCheckDeviceCredentialAppletProperties : NSObject

@property (readonly, nonatomic, getter=isLocked) char locked;
@property (readonly, nonatomic, getter=isContainer) char container;

- (id)description;
- (id)init;

@end
