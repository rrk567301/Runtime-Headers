@class NSNumber, NSMutableDictionary, NSMutableSet;

@interface CDRecentInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSMutableDictionary *volumes;
@property (retain, nonatomic) NSMutableSet *pushingServices;
@property (retain, nonatomic) NSMutableSet *invalidVolumes;

+ (id)fetchAllowedClassesSet;
+ (id)recentInfoForVolumes:(id)a0;

- (BOOL)isStale;
- (id)bsdDiskForVolume:(id)a0;
- (void)log;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (BOOL)validateForVolume:(id)a0 andService:(id)a1 atUrgency:(int)a2;
- (id)_createNewRecentVolumeInfo;
- (void)removeServiceInfo:(id)a0 forVolume:(id)a1;
- (id)initWithVolumes:(id)a0;
- (id)copyPushingServices;
- (BOOL)hasInvalids;
- (BOOL)isEmpty;
- (id)thresholdsForVolume:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isStaleForVolume:(id)a0;
- (id)initWithRecentInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)recentStateForVolume:(id)a0;
- (id)copyInvalidsForVolume:(id)a0 atUrgency:(int)a1;
- (id)_createNewRecentVolumeInfoWithName:(id)a0;
- (BOOL)updateRecentState:(long long)a0 forVolume:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (void)removeServiceInfo:(id)a0;
- (BOOL)updateServiceInfoAmount:(id)a0 forService:(id)a1 onVolume:(id)a2 atUrgency:(int)a3 withTimestamp:(double)a4 nonPurgeableAmount:(id)a5 deductFromCurrentAmount:(BOOL)a6 info:(id)a7;
- (id)servicesForVolume:(id)a0;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (void)invalidateForVolume:(id)a0;
- (BOOL)isInvalidForVolume:(id)a0;

@end
