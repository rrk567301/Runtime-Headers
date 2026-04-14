@interface SUOSUPostLogoutInstallOptions : NSObject

@property BOOL doItLater;
@property BOOL restartNow;
@property BOOL forceRestart;
@property BOOL skipFLO;
@property BOOL isInstallAssistant;
@property BOOL mdmInitiated;

- (id)initWithOptions:(id)a0;
- (id)description;

@end
