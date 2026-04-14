@class NSMutableDictionary;
@protocol MSPauseManagerDelegate;

@interface MSPauseManager : NSObject {
    NSMutableDictionary *_UUIDToTimerMap;
}

@property (weak, nonatomic) id<MSPauseManagerDelegate> delegate;

+ (id)sharedManager;

- (BOOL)isPaused;
- (void)_removeTimerUUID:(id)a0;
- (void)_timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)_addPauseUUID:(id)a0;
- (id)init;
- (void)unpauseUUID:(id)a0;
- (void)pingPauseUUID:(id)a0;
- (void)dealloc;

@end
