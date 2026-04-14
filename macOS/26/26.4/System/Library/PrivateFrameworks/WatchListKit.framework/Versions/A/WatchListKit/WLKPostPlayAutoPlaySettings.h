@class NSNumber;

@interface WLKPostPlayAutoPlaySettings : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *nextEpisodeSettingValue;
@property (retain, nonatomic) NSNumber *recommendedItemsSettingValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)_compareOptional:(id)a0 with:(id)a1;
- (BOOL)_hasValues;
- (id)_newSettingsMergedWithPreviousSettings:(id)a0;
- (BOOL)isEqualToSettings:(id)a0;

@end
