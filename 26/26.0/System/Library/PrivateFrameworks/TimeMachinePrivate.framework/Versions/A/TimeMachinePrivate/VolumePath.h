@class NSString;

@interface VolumePath : NSObject <NSCopying>

@property (readonly, copy) NSString *path;
@property (readonly, copy) NSString *sourceVolumeUUID;

+ (id)volumePathForFullPath:(id)a0 inVolume:(id)a1;
+ (id)volumePathForRelativePath:(id)a0 uuid:(id)a1;
+ (id)volumePathForRelativePath:(id)a0 inVolume:(id)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)volumePathByReplacingRelativePath:(id)a0;

@end
