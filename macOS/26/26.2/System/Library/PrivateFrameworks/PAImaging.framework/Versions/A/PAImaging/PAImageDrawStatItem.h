@class IPARegion;

@interface PAImageDrawStatItem : NSObject

@property (copy, nonatomic) IPARegion *region;
@property (nonatomic) double sharpness;

- (void).cxx_destruct;
- (id)description;

@end
