@class RTDataProtectionManager, NSArray, NSObject, RTStarkManager;
@protocol OS_dispatch_queue, RTNextPredictedLocationsOfInterestCacheDelegate;

@interface RTNextPredictedLocationsOfInterestCache : NSObject

@property (nonatomic) char enabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *nextPredictedLocationsOfInterest;
@property (retain, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (retain, nonatomic) RTStarkManager *starkManager;
@property (weak, nonatomic) id<RTNextPredictedLocationsOfInterestCacheDelegate> delegate;

+ (id)cachePath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)cacheNextPredictedLocationsOfInterest:(id)a0;
- (id)getCachedNextPredictedLocationsOfInterest;
- (void)handleStarkTrustedConnectionEstablished:(char)a0;
- (void)handleUnlockedSinceBoot:(char)a0;
- (id)initWithQueue:(id)a0 dataProtectionManager:(id)a1 starkManager:(id)a2;
- (void)onDataProtectionNotification:(id)a0;
- (void)onStarkNotification:(id)a0;
- (void)purgeWithReferenceDate:(id)a0;

@end
