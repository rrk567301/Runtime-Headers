@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (id)lastDate;
- (double)duration;
- (void).cxx_destruct;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;
- (id)firstDate;
- (id)init;
- (id)description;
- (id)initWithLocations:(id)a0;

@end
