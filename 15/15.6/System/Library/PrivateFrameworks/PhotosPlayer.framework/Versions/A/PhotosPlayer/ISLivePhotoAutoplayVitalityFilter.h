@class NSDate;

@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter

@property (nonatomic, setter=_setState:) long long _state;
@property (nonatomic, setter=setVisible:) char isVisible;
@property (nonatomic) double visibilityOffset;
@property (nonatomic) char hasTargetVisibilityOffset;
@property (nonatomic) double targetVisibilityOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (nonatomic, setter=setScrolling:) char isScrolling;
@property (nonatomic, setter=setDecelerating:) char isDecelerating;

- (void).cxx_destruct;
- (void)updateOutput;

@end
