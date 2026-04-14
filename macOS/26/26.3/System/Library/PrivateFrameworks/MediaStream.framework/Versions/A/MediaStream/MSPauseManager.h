@class NSMutableDictionary;
@protocol MSPauseManagerDelegate;

@interface MSPauseManager : NSObject {
    NSMutableDictionary *_UUIDToTimerMap;
}

@property (weak, nonatomic) id<MSPauseManagerDelegate> delegate;

+ (id)sharedManager;

- (void)_addPauseUUID:(id)a0;
- (void)unpauseUUID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isPaused;
- (void)_removeTimerUUID:(id)a0;
- (void)dealloc;
- (void)pingPauseUUID:(id)a0;
- (void)_timerDidFire:(id)a0;

@end
