@interface PHProjectExtensionServiceViewController : PHExtensionServiceViewController

+ (Class)windowClass;
+ (Class)expectedExtensionContextClass;
+ (id)expectedPrincipalObjectProtocol;

- (void)loadView;
- (void)didConnectToExtensionContext:(id)a0;

@end
