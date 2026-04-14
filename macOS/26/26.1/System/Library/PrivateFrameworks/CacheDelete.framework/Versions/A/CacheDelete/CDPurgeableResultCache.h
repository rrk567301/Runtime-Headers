@class NSObject, CDRecentInfo;
@protocol OS_dispatch_queue;

@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>

@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedPurgeableResultsCache;
+ (id)fetchVolumeWithPath:(id)a0;

- (BOOL)isInvalidForVolume:(id)a0;
- (id)thresholdsForVolume:(id)a0;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (id)servicesForVolume:(id)a0;
- (id)recentPurgeableTotals:(int)a0;
- (id)initEmpty;
- (id)bsdDiskForVolume:(id)a0;
- (BOOL)isStale;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2 targetVolume:(id)a3;
- (BOOL)isStaleForVolume:(id)a0;
- (id)dictionaryByMerging:(id)a0 with:(id)a1;
- (id)_recentPurgeableTotals:(int)a0 validateResults:(BOOL)a1;
- (void)log;
- (long long)recentStateForVolume:(id)a0;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (void)updateRecentVolumeInfo:(id)a0;
- (void).cxx_destruct;
- (void)absorbRecentInfo:(id)a0;
- (BOOL)hasInvalids;
- (void)invalidateAllForgettingPushers:(BOOL)a0;
- (BOOL)isEmpty;
- (void)keepUpToDate:(id)a0;

@end
