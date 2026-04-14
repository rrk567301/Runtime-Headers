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

+ (id)mountPointForUUID:(id)a0;
+ (id)validateVolumeAtPath:(id)a0;
+ (id)volumeWithMountpoint:(id)a0;
+ (id)volumeWithPath:(id)a0;
+ (id)volumeWithUUID:(id)a0;
+ (long long)stateForPath:(id)a0;
+ (id)rootVolume;

- (BOOL)validate;
- (id)uuid;
- (unsigned long long)used;
- (id)FSEventsUUID;
- (long long)state;
- (unsigned long long)freespace;
- (unsigned long long)hash;
- (BOOL)freespaceIsStale:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)amountIsRational:(id)a0 freespace:(unsigned long long)a1 effective_size:(unsigned long long)a2 used:(unsigned long long)a3 size:(unsigned long long)a4;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)size;
- (BOOL)mayContainPurgeableAmount:(id)a0 forService:(id)a1;
- (unsigned long long)amountPurged;
- (id)initWithPath:(id)a0;
- (id)initWithVolume:(id)a0;
- (BOOL)containsPath:(id)a0;
- (unsigned long long)effective_size;
- (BOOL)isEqualTo:(id)a0;

@end
