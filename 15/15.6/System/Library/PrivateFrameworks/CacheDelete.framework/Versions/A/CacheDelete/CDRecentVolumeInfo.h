@class NSString, NSMutableDictionary, NSDictionary, NSDate, NSNumber, CacheDeleteVolume;

@interface CDRecentVolumeInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *volume;
@property (retain, nonatomic) CacheDeleteVolume *cdVolume;
@property (retain) NSDate *timestamp;
@property (retain) NSNumber *freespace;
@property unsigned long long reserve;
@property (retain, nonatomic) NSString *bsdDisk;
@property BOOL hasSnapshot;
@property (retain, nonatomic) NSMutableDictionary *services;
@property (nonatomic) long long volumeState;
@property (retain, nonatomic) NSDictionary *thresholds;
@property (retain, nonatomic) NSMutableDictionary *diagnostics;

+ (id)CDRecentVolumeInfo:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)log;
- (char)isStale;
- (id)_recentInfoAtUrgency:(int)a0 validateResults:(char)a1;
- (unsigned long long)_reserveForVolume;
- (char)_validateWithSharedCacheDeleteForService:(id)a0;
- (id)copyInvalidsAtUrgency:(int)a0 currentlyPushing:(id)a1;
- (id)createVolumeWithMountPoint:(id)a0;
- (id)createVolumeWithPath:(id)a0;
- (id)initWithServices:(id)a0 volumeName:(id)a1;
- (id)initWithVolumeInfo:(id)a0;
- (id)recentInfoAtUrgency:(int)a0;
- (void)removeServiceInfo:(id)a0;
- (char)updateServiceInfoAmount:(id)a0 forService:(id)a1 atUrgency:(int)a2 withTimestamp:(double)a3 nonPurgeableAmount:(id)a4 deductFromCurrentAmount:(char)a5 info:(id)a6;
- (char)validateServiceInfo:(id)a0 atUrgency:(int)a1;
- (id)volumeServices;

@end
