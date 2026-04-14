@class NSString, AXETrackingTouchEvent, NSDate;
@protocol AXETrackingSplitTapGestureRecognizerDelegate;

@interface AXETrackingSplitTapGestureRecognizer : NSObject <AXETrackingGestureRecognizer>

@property (retain, nonatomic) AXETrackingTouchEvent *_firstTouchStart;
@property (retain, nonatomic) AXETrackingTouchEvent *_secondTouchStart;
@property (retain, nonatomic) NSDate *_secondTouchStartTime;
@property (nonatomic) unsigned long long _currentState;
@property (readonly, nonatomic) double maximumTapDownDeviation;
@property (weak, nonatomic) id<AXETrackingSplitTapGestureRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMaximumTapDownDeviation:(double)a0;
- (void)processGestureEvent:(id)a0;

@end
