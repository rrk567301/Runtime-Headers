@class NSEvent, NSMutableArray;

@interface _NSGestureRecognizerDelayedEvent : NSObject {
    long long _delayCount;
}

@property (retain) NSEvent *event;
@property BOOL cloneForSecondDelivery;
@property (readonly) double timestampForDelivery;
@property (readonly, copy) NSMutableArray *gestureRecognizers;
@property (readonly) long long delayCount;

+ (void)initialize;

- (void)incrementDelayCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)decrementDelayCount;
- (void).cxx_destruct;
- (id)description;
- (void)addGestureRecognizer:(id)a0;

@end
