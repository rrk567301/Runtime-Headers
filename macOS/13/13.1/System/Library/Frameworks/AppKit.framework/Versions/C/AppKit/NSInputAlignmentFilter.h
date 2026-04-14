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
- (void)updateWithEvent:(id)a0;
- (void)updateWithPanRecognizer:(id)a0;
- (BOOL)processHorizontalAlignment:(double)a0 ofReference:(id)a1 againstVerticalGuide:(id)a2;
- (BOOL)processVerticalAlignment:(double)a0 ofReference:(id)a1 againstHorizontalGuide:(id)a2;
- (BOOL)processAlignment:(struct CGPoint { double x0; double x1; })a0 ofReference:(id)a1 againstGuide:(id)a2;
- (struct CGPoint { double x0; double x1; })_currentLocation;
- (double)_currentTimestamp;
- (void)filterInputEvent:(id)a0;
- (void)filterActionInputUsingPanRecognizer:(id)a0;
- (BOOL)alignHorizontalDistance:(double)a0;
- (BOOL)alignVerticalDistance:(double)a0;
- (BOOL)alignDistance:(struct CGPoint { double x0; double x1; })a0;
- (void)_setActuationBlock:(id /* block */)a0;
- (void)_setSnapDistance:(long long)a0;
- (void)_updateDragOnLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 modifierFlags:(unsigned long long)a2 recognizer:(id)a3;
- (BOOL)_hasCurrentLocation;
- (struct CGPoint { double x0; double x1; })_filteredVelocity;
- (void)_clearPeriodicTimer;
- (BOOL)_canPerformAlignment;
- (BOOL)_shouldAlignHorizontalDistance:(double)a0;
- (BOOL)_shouldAlignVerticalDistance:(double)a0;
- (BOOL)_modifierFlagsAllowAlignment;
- (void)_schedulePeriodicUpdateWithRecognizer:(id)a0;
- (void)_requestPeriodicUpdate;
- (BOOL)_isHorizontalVelocityAlignable;
- (BOOL)_isVerticalVelocityAlignable;

@end
