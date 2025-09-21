@class IPInstallableStateSource;

@interface IPInstallableState : NSObject

@property (readonly) IPInstallableStateSource *source;
@property (readonly) char isInstalling;

- (void).cxx_destruct;
- (id)initWithStateSource:(id)a0 isInstalling:(char)a1;

@end
