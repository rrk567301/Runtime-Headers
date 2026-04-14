@class NSObject, CDRecentInfo;
@protocol OS_dispatch_queue;

@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>

@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)fetchVolumeWithPath:(id)a0;
+ (id)sharedPurgeableResultsCache;

- (BOOL)isStale;
- (id)bsdDiskForVolume:(id)a0;
- (void)log;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (id)dictionaryByMerging:(id)a0 with:(id)a1;
- (id)recentPurgeableTotals:(int)a0;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2 targetVolume:(id)a3;
- (void)updateRecentVolumeInfo:(id)a0;
- (void)keepUpToDate:(id)a0;
- (BOOL)hasInvalids;
- (BOOL)isEmpty;
- (id)thresholdsForVolume:(id)a0;
- (BOOL)isStaleForVolume:(id)a0;
- (id)_recentPurgeableTotals:(int)a0 validateResults:(BOOL)a1;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (void).cxx_destruct;
- (long long)recentStateForVolume:(id)a0;
- (void)absorbRecentInfo:(id)a0;
- (void)invalidateAllForgettingPushers:(BOOL)a0;
- (id)initEmpty;
- (id)servicesForVolume:(id)a0;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (BOOL)isInvalidForVolume:(id)a0;

@end
