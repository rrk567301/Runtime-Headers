@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (double)duration;
- (id)initWithLocations:(id)a0;
- (id)description;
- (id)init;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)lastDate;
- (id)firstDate;

@end
