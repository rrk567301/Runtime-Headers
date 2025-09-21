@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (id)init;
- (id)firstDate;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;
- (id)description;
- (double)duration;
- (id)lastDate;
- (void).cxx_destruct;
- (id)initWithLocations:(id)a0;

@end
