@interface SUOSUPostLogoutInstallOptions : NSObject

@property char doItLater;
@property char restartNow;
@property char forceRestart;
@property char skipFLO;
@property char isInstallAssistant;
@property char allowSplatPassengers;
@property char mdmInitiated;

- (id)description;
- (id)initWithOptions:(id)a0;

@end
