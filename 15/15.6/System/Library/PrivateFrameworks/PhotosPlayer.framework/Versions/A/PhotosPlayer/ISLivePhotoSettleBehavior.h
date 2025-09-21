@protocol ISLivePhotoSettleBehaviorDelegate;

@interface ISLivePhotoSettleBehavior : ISBehavior

@property (weak, nonatomic) id<ISLivePhotoSettleBehaviorDelegate> delegate;

- (long long)behaviorType;
- (void)_didFinish;
- (void)settle:(char)a0;

@end
