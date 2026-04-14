@class _CLLocationManagerRoutineProxy;
@protocol CLInertialDataManagerDelegate, CLLocationManagerDelegate;

@interface CLLocationManagerRoutine : NSObject

@property (retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;
@property (weak, nonatomic) id<CLLocationManagerDelegate> delegate;
@property (weak, nonatomic) id<CLInertialDataManagerDelegate> inertialDelegate;

- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (id)init;

@end
