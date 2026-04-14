@class NSArray;

@interface VISearchResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *regionOfInterestResults;

+ (id)empty;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRegionOfInterestResults:(id)a0;

@end
