@class _NS1DVelocityFilter;

@interface _NS2DVelocityFilter : NSObject {
    _NS1DVelocityFilter *xFilter;
    _NS1DVelocityFilter *yFilter;
}

@property (readonly) double lastTimestamp;
@property (readonly) struct CGPoint { double x0; double x1; } filteredVelocity;
@property double maxAllowedVelocity;

- (void)reset;
- (void)dealloc;
- (id)init;
- (void)addDelta:(struct CGPoint { double x0; double x1; })a0 withTimestamp:(double)a1;
- (BOOL)resetIfOutOfDate:(double)a0;

@end
