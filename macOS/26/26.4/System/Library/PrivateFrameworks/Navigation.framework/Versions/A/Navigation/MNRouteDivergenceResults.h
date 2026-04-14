@class NSUUID, NSArray;

@interface MNRouteDivergenceResults : NSObject

@property (retain, nonatomic) NSUUID *routeID;
@property (retain, nonatomic) NSArray *results;

- (void).cxx_destruct;
- (id)description;

@end
