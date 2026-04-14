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

+ (id)validateVolumeAtPath:(id)a0;
+ (id)volumeWithUUID:(id)a0;
+ (id)rootVolume;
+ (long long)stateForPath:(id)a0;
+ (id)volumeWithPath:(id)a0;
+ (id)mountPointForUUID:(id)a0;
+ (id)volumeWithMountpoint:(id)a0;

- (unsigned long long)used;
- (id)initWithPath:(id)a0;
- (BOOL)freespaceIsStale:(unsigned long long)a0;
- (BOOL)validate;
- (BOOL)containsPath:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (id)description;
- (long long)state;
- (unsigned long long)size;
- (unsigned long long)freespace;
- (id)uuid;
- (BOOL)amountIsRational:(id)a0 freespace:(unsigned long long)a1 effective_size:(unsigned long long)a2 used:(unsigned long long)a3 size:(unsigned long long)a4;
- (void).cxx_destruct;
- (unsigned long long)effective_size;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)FSEventsUUID;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)amountPurged;
- (BOOL)mayContainPurgeableAmount:(id)a0 forService:(id)a1;
- (id)initWithVolume:(id)a0;

@end
