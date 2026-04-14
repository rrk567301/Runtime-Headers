@class NSString, NSDictionary;

@interface CacheDeleteVolume : NSObject

@property (readonly) BOOL isRoot;
@property (readonly, nonatomic) NSString *fsType;
@property (readonly, nonatomic) NSString *mountPoint;
@property (readonly) unsigned long long initialFreespace;
@property (readonly, nonatomic) NSDictionary *thresholds;
@property (readonly, nonatomic) long long state;
@property (readonly) int dev;
@property (readonly) unsigned int block_size;
@property (readonly, nonatomic) NSString *bsdName;

+ (id)volumeWithPath:(id)a0;
+ (id)volumeWithMountpoint:(id)a0;
+ (id)validateVolumeAtPath:(id)a0;
+ (id)mountPointForUUID:(id)a0;
+ (id)rootVolume;
+ (long long)stateForPath:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)size;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)uuid;
- (long long)state;
- (id)initWithPath:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)validate;
- (unsigned long long)freespace;
- (id)initWithVolume:(id)a0;
- (unsigned long long)effective_size;
- (unsigned long long)used;
- (unsigned long long)amountPurged;
- (BOOL)freespaceIsStale:(unsigned long long)a0;
- (BOOL)amountIsRational:(id)a0;
- (id)FSEventsUUID;
- (BOOL)containsPath:(id)a0;

@end
