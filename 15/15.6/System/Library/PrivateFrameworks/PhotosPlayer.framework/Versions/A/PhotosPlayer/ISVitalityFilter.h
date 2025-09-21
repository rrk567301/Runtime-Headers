@class NSDate;
@protocol ISVitalitySettings;

@interface ISVitalityFilter : NSObject

@property (nonatomic, setter=_setPerformingInputChanges:) char _isPerformingInputChanges;
@property (nonatomic, setter=_setPerformingOutputChanges:) char _isPerformingOutputChanges;
@property (nonatomic, setter=_setOutputDidChange:) char _outputDidChange;
@property (nonatomic, getter=isScrubbing) char scrubbing;
@property (nonatomic) double scrubOffset;
@property (nonatomic) double playRate;
@property (readonly, nonatomic) id<ISVitalitySettings> settings;
@property (nonatomic, setter=setVisible:) char isVisible;
@property (nonatomic) double visibilityOffset;
@property (nonatomic) char hasTargetVisibilityOffset;
@property (nonatomic) double targetVisibilityOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (nonatomic, setter=setScrolling:) char isScrolling;
@property (nonatomic, setter=setDecelerating:) char isDecelerating;
@property (copy, nonatomic) id /* block */ outputChangeHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (void)_invalidateOutput;
- (void)inputDidChange;
- (void)performInputChanges:(id /* block */)a0;
- (void)performOutputChanges:(id /* block */)a0;

@end
