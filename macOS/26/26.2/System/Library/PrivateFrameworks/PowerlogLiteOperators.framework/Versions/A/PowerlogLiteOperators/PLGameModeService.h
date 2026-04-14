@class PLCFNotificationOperatorComposition;

@interface PLGameModeService : PLService

@property (retain) PLCFNotificationOperatorComposition *consoleModeListener;
@property BOOL previousGameModeState;

+ (void)load;

- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)init;
- (void)postGameModeStatusChangeNotification:(id)a0;
- (void)updateGameMode;

@end
