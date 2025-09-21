@class CLLocation;

@interface SMLocationEvent : NSObject

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) double distance;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 distance:(double)a1;

@end
