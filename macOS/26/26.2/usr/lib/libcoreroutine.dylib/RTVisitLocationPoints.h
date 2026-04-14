@class NSArray, RTLocation;

@interface RTVisitLocationPoints : NSObject

@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) RTLocation *centroid;

- (double)duration;
- (id)initWithLocations:(id)a0;
- (void).cxx_destruct;
- (void)enumerateLowSpeedSegementsUsingBlock:(id)a0 block:(id /* block */)a1;
- (id)description;
- (id)lastDate;
- (id)firstDate;
- (id)init;

@end
