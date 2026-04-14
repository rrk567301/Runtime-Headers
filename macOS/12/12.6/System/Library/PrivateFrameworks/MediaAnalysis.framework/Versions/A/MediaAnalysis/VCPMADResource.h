@interface VCPMADResource : NSObject

@property (readonly, nonatomic) double activeCost;
@property (readonly, nonatomic) double inactiveCost;

- (id)description;
- (void)purge;

@end
