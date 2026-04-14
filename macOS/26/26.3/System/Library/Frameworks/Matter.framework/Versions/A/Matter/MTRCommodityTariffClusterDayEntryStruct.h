@class NSNumber;

@interface MTRCommodityTariffClusterDayEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dayEntryID;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *randomizationOffset;
@property (copy, nonatomic) NSNumber *randomizationType;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
