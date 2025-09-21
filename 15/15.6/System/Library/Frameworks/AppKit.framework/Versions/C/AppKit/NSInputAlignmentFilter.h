@class NSTimer;
@protocol NSObject;

@interface NSInputAlignmentFilter : NSObject {
    long long _reserved0;
    long long _flags;
    id _velocityFilter;
    NSTimer *_periodicUpdateTimer;
    struct CGPoint { double x; double y; } _currentLocation;
    double _currentTimestamp;
    double _lastMovementTimestamp;
    unsigned long long _modifierFlags;
    struct CGPoint { double x; double y; } _movementSinceLastAlignment;
    struct CGPoint { double x; double y; } _cumulativeMovementSinceLastAlignment;
    struct CGPoint { double x; double y; } _lastAlignmentDistance;
    id<NSObject> _references[4];
    id _reserved1;
}

@property (class, readonly) unsigned long long inputEventMask;

+ (unsigned long long)filterInputEventMask;

- (void)dealloc;
- (id)init;
- (char)_shouldAlignHorizontalDistance:(double)a0;
- (char)_canPerformAlignment;
- (void)_clearPeriodicTimer;
- (struct CGPoint { double x0; double x1; })_currentLocation;
- (double)_currentTimestamp;
- (struct CGPoint { double x0; double x1; })_filteredVelocity;
- (char)_hasCurrentLocation;
- (char)_isHorizontalVelocityAlignable;
- (char)_isVerticalVelocityAlignable;
- (char)_modifierFlagsAllowAlignment;
- (void)_requestPeriodicUpdate;
- (void)_schedulePeriodicUpdateWithRecognizer:(id)a0;
- (void)_setActuationBlock:(id /* block */)a0;
- (void)_setSnapDistance:(long long)a0;
- (char)_shouldAlignVerticalDistance:(double)a0;
- (void)_updateDragOnLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 modifierFlags:(unsigned long long)a2 recognizer:(id)a3;
- (char)alignDistance:(struct CGPoint { double x0; double x1; })a0;
- (char)alignHorizontalDistance:(double)a0;
- (char)alignVerticalDistance:(double)a0;
- (void)filterActionInputUsingPanRecognizer:(id)a0;
- (void)filterInputEvent:(id)a0;
- (char)processAlignment:(struct CGPoint { double x0; double x1; })a0 ofReference:(id)a1 againstGuide:(id)a2;
- (char)processHorizontalAlignment:(double)a0 ofReference:(id)a1 againstVerticalGuide:(id)a2;
- (char)processVerticalAlignment:(double)a0 ofReference:(id)a1 againstHorizontalGuide:(id)a2;
- (void)updateWithEvent:(id)a0;
- (void)updateWithPanRecognizer:(id)a0;

@end
