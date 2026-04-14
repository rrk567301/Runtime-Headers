@class NSString;
@protocol DMTProfileInstallationPrimitives;

@interface DMTUninstallProfileOperation : CATOperation

@property (readonly, nonatomic) id<DMTProfileInstallationPrimitives> primitives;
@property (readonly, nonatomic) NSString *profileIdentifier;

- (BOOL)isAsynchronous;
- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithProfileInstallationPrimitives:(id)a0 profileIdentifier:(id)a1;
- (void)uninstallProfile;

@end
