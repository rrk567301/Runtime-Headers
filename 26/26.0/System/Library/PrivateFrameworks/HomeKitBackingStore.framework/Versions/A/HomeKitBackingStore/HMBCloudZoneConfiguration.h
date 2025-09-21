@interface HMBCloudZoneConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property BOOL shouldRebuildOnManateeKeyLoss;
@property BOOL shouldSkipCloudPulls;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
