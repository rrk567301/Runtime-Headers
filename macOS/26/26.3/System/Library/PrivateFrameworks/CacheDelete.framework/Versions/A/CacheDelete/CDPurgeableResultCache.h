@class NSObject, CDRecentInfo;
@protocol OS_dispatch_queue;

@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>

@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedPurgeableResultsCache;
+ (id)fetchVolumeWithPath:(id)a0;

- (BOOL)isStale;
- (id)recentPurgeableTotals:(int)a0;
- (void)updateRecentVolumeInfo:(id)a0;
- (BOOL)isInvalidForVolume:(id)a0;
- (BOOL)isEmpty;
- (void)log;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (id)_recentPurgeableTotals:(int)a0 validateResults:(BOOL)a1;
- (id)initEmpty;
- (id)servicesForVolume:(id)a0;
- (BOOL)hasInvalids;
- (void)keepUpToDate:(id)a0;
- (long long)recentStateForVolume:(id)a0;
- (void)absorbRecentInfo:(id)a0;
- (void).cxx_destruct;
- (id)bsdDiskForVolume:(id)a0;
- (BOOL)isStaleForVolume:(id)a0;
- (id)thresholdsForVolume:(id)a0;
- (void)invalidateAllForgettingPushers:(BOOL)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2 targetVolume:(id)a3;
- (id)dictionaryByMerging:(id)a0 with:(id)a1;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1;

@end
