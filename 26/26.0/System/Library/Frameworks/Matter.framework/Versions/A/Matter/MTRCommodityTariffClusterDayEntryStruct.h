@class NSNumber;

@interface MTRCommodityTariffClusterDayEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dayEntryID;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *randomizationOffset;
@property (copy, nonatomic) NSNumber *randomizationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
