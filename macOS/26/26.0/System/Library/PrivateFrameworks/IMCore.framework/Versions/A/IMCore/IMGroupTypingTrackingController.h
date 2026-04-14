@class IMHandle, NSArray, NSMutableDictionary, NSString, NSMutableArray;
@protocol IMGroupTypingTrackingControllerDelegate;

@interface IMGroupTypingTrackingController : NSObject <IMTypingTimerDelegate>

@property (retain, nonatomic) NSMutableArray *typingHandles;
@property (retain, nonatomic) NSMutableArray *scheduledTimers;
@property (retain, nonatomic) IMHandle *handleToRemoveViaAnimation;
@property (weak, nonatomic) id<IMGroupTypingTrackingControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *currentTypingHandles;
@property (retain, nonatomic) NSMutableDictionary *pluginPayloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)timeoutInterval;

- (id)init;
- (void).cxx_destruct;
- (void)resetHandleToRemoveViaAnimation;
- (void)_addTyper:(id)a0 messageTime:(id)a1;
- (void)_removeTyper:(id)a0;
- (void)invalidateScheduledTimeoutsForHandleIfNecessary:(id)a0;
- (void)scheduleTypingTimeoutForHandle:(id)a0 withBeginDate:(id)a1;
- (void)typingTimeoutDidTriggerWithTimer:(id)a0;
- (void)updateWithIncomingItem:(id)a0;

@end
