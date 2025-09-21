@class PLCFNotificationOperatorComposition;

@interface PLGameModeService : PLService

@property (retain) PLCFNotificationOperatorComposition *consoleModeListener;
@property BOOL previousGameModeState;

+ (void)load;

- (void)initOperatorDependancies;
- (id)init;
- (void).cxx_destruct;
- (void)postGameModeStatusChangeNotification:(id)a0;
- (void)updateGameMode;

@end
