@class NSNumber;

@interface WLKPostPlayAutoPlaySettings : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *nextEpisodeSettingValue;
@property (retain, nonatomic) NSNumber *recommendedItemsSettingValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_compareOptional:(id)a0 with:(id)a1;
- (BOOL)_hasValues;
- (id)_newSettingsMergedWithPreviousSettings:(id)a0;
- (BOOL)isEqualToSettings:(id)a0;

@end
