@protocol LACSContext;

@interface LocalAuthenticationCredentialServices.LACSUnmanagedPassword : NSObject

@property (nonatomic, readonly) id<LACSContext> context;

- (void).cxx_destruct;
- (id)init;

@end
