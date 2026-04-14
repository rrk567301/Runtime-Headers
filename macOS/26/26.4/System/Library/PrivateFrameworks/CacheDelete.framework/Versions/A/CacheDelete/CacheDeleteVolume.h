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

+ (id)rootVolume;
+ (id)validateVolumeAtPath:(id)a0;
+ (id)volumeWithMountpoint:(id)a0;
+ (id)volumeWithUUID:(id)a0;
+ (long long)stateForPath:(id)a0;
+ (id)volumeWithPath:(id)a0;
+ (id)mountPointForUUID:(id)a0;

- (id)initWithPath:(id)a0;
- (unsigned long long)used;
- (BOOL)validate;
- (BOOL)containsPath:(id)a0;
- (BOOL)mayContainPurgeableAmount:(id)a0 forService:(id)a1;
- (unsigned long long)effective_size;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)freespaceIsStale:(unsigned long long)a0;
- (id)FSEventsUUID;
- (unsigned long long)freespace;
- (id)initWithVolume:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)amountPurged;
- (void).cxx_destruct;
- (BOOL)amountIsRational:(id)a0 freespace:(unsigned long long)a1 effective_size:(unsigned long long)a2 used:(unsigned long long)a3 size:(unsigned long long)a4;
- (unsigned long long)hash;
- (BOOL)isEqualTo:(id)a0;
- (id)description;
- (id)uuid;
- (unsigned long long)size;
- (long long)state;

@end
