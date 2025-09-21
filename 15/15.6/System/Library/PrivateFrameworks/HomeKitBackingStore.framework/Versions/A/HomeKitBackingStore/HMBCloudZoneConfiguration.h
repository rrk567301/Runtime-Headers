@interface HMBCloudZoneConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property char shouldRebuildOnManateeKeyLoss;
@property char shouldSkipCloudPulls;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;

@end
