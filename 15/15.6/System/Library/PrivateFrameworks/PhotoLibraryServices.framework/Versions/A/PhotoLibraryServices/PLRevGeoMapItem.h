@class NSArray;

@interface PLRevGeoMapItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *sortedPlaceInfos;
@property (readonly, nonatomic) NSArray *backupPlaceInfos;
@property (readonly, nonatomic) NSArray *finalPlaceInfos;

+ (id)mapItemWithGEOMapItem:(id)a0;
+ (id)placeInfoWithName:(id)a0 geoPlaceInfo:(id)a1 dominantOrderType:(unsigned long long)a2;
+ (id /* block */)sortedAdditionalPlaceInfoComparator;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSortedPlaceInfos:(id)a0 backupPlaceInfos:(id)a1 finalPlaceInfos:(id)a2;

@end
