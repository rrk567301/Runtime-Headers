@class NSString;

@interface HMDLegacyCloudZoneConfiguration : HMBCloudZoneConfiguration <NSMutableCopying>

@property (copy) NSString *rootRecordName;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
