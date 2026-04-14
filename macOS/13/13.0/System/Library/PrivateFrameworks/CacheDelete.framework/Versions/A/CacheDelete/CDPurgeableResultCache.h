@class NSObject, CDRecentInfo;
@protocol OS_dispatch_queue;

@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>

@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedPurgeableResultsCache;
+ (id)fetchVolumeWithPath:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)log;
- (BOOL)isStale;
- (id)initEmpty;
- (id)recentPurgeableTotals:(int)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2 targetVolume:(id)a3;
- (long long)recentStateForVolume:(id)a0;
- (void)invalidateAllForgettingPushers:(BOOL)a0;
- (BOOL)hasInvalids;
- (id)_recentPurgeableTotals:(int)a0 validateResults:(BOOL)a1;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1;
- (void)updateRecentVolumeInfo:(id)a0;
- (id)bsdDiskForVolume:(id)a0;
- (id)thresholdsForVolume:(id)a0;
- (id)servicesForVolume:(id)a0;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (BOOL)isStaleForVolume:(id)a0;
- (BOOL)isInvalidForVolume:(id)a0;
- (void)absorbRecentInfo:(id)a0;
- (void)keepUpToDate:(id)a0;

@end
