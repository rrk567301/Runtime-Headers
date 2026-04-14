@class NSNumber;

@interface WLKPostPlayAutoPlaySettings : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *nextEpisodeSettingValue;
@property (retain, nonatomic) NSNumber *recommendedItemsSettingValue;

- (BOOL)_compareOptional:(id)a0 with:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_hasValues;
- (id)_newSettingsMergedWithPreviousSettings:(id)a0;
- (BOOL)isEqualToSettings:(id)a0;

@end
