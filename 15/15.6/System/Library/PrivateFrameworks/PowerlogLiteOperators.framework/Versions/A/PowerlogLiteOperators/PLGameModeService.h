@class PLCFNotificationOperatorComposition;

@interface PLGameModeService : PLService

@property (retain) PLCFNotificationOperatorComposition *consoleModeListener;
@property char previousGameModeState;

+ (void)load;

- (id)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)postGameModeStatusChangeNotification:(id)a0;
- (void)updateGameMode;

@end
