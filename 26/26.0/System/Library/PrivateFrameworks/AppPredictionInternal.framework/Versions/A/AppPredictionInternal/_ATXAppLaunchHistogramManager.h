@class NSMutableDictionary, NSDictionary, _ATXDataStore, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppLaunchHistogramManager : NSObject {
    _ATXDataStore *_datastore;
    NSObject<OS_dispatch_queue> *_backgroundSaverQueue;
    NSDictionary *_parameters;
    NSMutableDictionary *_histograms;
    NSMutableDictionary *_categoricalHistograms;
    long long _SSIDPruningMethod;
    int _maxSSIDCount;
    long long _actionConfirmsRejectsPruningMethod;
    int _maxActionConfirmsRejectsActionCount;
    int _maxAppSpecificLocationMaxKeyCount;
    int _maxAppCoarseLocationMaxKeyCount;
    int _maxAppZoom7GeoHashMaxKeyCount;
    long long _appJointContextPruningMethod;
    int _maxAppJointContextKeyCount;
}

@property (readonly, nonatomic) BOOL persistentStore;

+ (id)sharedInstance;
+ (BOOL)isHistogramDeprecated:(long long)a0;
+ (void)releaseTemporarySharedInstance;
+ (void)useTemporarySharedInstance:(id)a0;
+ (void)resetDataForCategoricalHistograms;
+ (void)resetSharedInstance;
+ (void)resetDataForHistograms;

- (id)initWithInMemoryStore;
- (void)exchangeDatastore:(id)a0;
- (void)purgeHistogramForLaunchType:(long long)a0;
- (int)getHistogramMaxCategoryCountFromAsset:(id)a0;
- (id)_categoricalHistogramForLaunchType:(long long)a0 maxCategoryCount:(unsigned short)a1 pruningMethod:(long long)a2;
- (id)init;
- (id)categoricalHistogramForLaunchType:(long long)a0;
- (unsigned long long)getHistogramPruningMethodFromAsset:(id)a0;
- (void)enumerateInMemoryCategoricalHistogramsWithBlock:(id /* block */)a0;
- (id)initWithPersistentStore;
- (void)enumerateInMemoryHistogramsWithBlock:(id /* block */)a0;
- (id)histogramForLaunchType:(long long)a0;
- (id)initAndPersist:(BOOL)a0;
- (void).cxx_destruct;

@end
