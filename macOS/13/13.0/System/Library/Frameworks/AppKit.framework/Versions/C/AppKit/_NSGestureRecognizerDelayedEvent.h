@class NSEvent, NSMutableArray;

@interface _NSGestureRecognizerDelayedEvent : NSObject {
    long long _delayCount;
}

@property (retain) NSEvent *event;
@property BOOL cloneForSecondDelivery;
@property (readonly) double timestampForDelivery;
@property (readonly, copy) NSMutableArray *gestureRecognizers;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addGestureRecognizer:(id)a0;
- (long long)decrementDelayCount;
- (void)incrementDelayCount;
- (long long)delayCount;

@end
