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

+ (id)volumeWithUUID:(id)a0;
+ (id)volumeWithPath:(id)a0;
+ (id)volumeWithMountpoint:(id)a0;
+ (id)mountPointForUUID:(id)a0;
+ (id)rootVolume;
+ (id)validateVolumeAtPath:(id)a0;
+ (long long)stateForPath:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)size;
- (void).cxx_destruct;
- (long long)state;
- (id)uuid;
- (id)initWithPath:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)validate;
- (unsigned long long)used;
- (unsigned long long)freespace;
- (id)initWithVolume:(id)a0;
- (unsigned long long)amountPurged;
- (unsigned long long)effective_size;
- (BOOL)freespaceIsStale:(unsigned long long)a0;
- (BOOL)amountIsRational:(id)a0;
- (id)FSEventsUUID;
- (BOOL)containsPath:(id)a0;
- (BOOL)mayContainPurgeableAmount:(id)a0 forService:(id)a1;

@end
