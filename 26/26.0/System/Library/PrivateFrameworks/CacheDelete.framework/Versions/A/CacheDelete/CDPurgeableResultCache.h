@class NSObject, CDRecentInfo;
@protocol OS_dispatch_queue;

@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>

@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)fetchVolumeWithPath:(id)a0;
+ (id)sharedPurgeableResultsCache;

- (void)invalidateAllForgettingPushers:(BOOL)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (id)dictionaryByMerging:(id)a0 with:(id)a1;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2 targetVolume:(id)a3;
- (void)log;
- (id)_recentPurgeableTotals:(int)a0 validateResults:(BOOL)a1;
- (BOOL)isEmpty;
- (long long)recentStateForVolume:(id)a0;
- (void)updateRecentVolumeInfo:(id)a0;
- (BOOL)isInvalidForVolume:(id)a0;
- (id)initEmpty;
- (id)thresholdsForVolume:(id)a0;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (id)bsdDiskForVolume:(id)a0;
- (BOOL)isStaleForVolume:(id)a0;
- (BOOL)hasInvalids;
- (id)recentPurgeableTotals:(int)a0;
- (BOOL)isStale;
- (id)servicesForVolume:(id)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (void)absorbRecentInfo:(id)a0;
- (void).cxx_destruct;
- (void)keepUpToDate:(id)a0;

@end
