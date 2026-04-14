@class NSString;
@protocol DMTProfileInstallationPrimitives;

@interface DMTUninstallProfileOperation : CATOperation

@property (readonly, nonatomic) id<DMTProfileInstallationPrimitives> primitives;
@property (readonly, nonatomic) NSString *profileIdentifier;

- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)initWithProfileInstallationPrimitives:(id)a0 profileIdentifier:(id)a1;
- (void)uninstallProfile;

@end
