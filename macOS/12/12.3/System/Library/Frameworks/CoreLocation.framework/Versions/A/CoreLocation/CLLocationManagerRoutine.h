@class _CLLocationManagerRoutineProxy;
@protocol CLLocationManagerDelegate;

@interface CLLocationManagerRoutine : NSObject

@property (retain, nonatomic) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;
@property (nonatomic) id<CLLocationManagerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)a0;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;

@end
