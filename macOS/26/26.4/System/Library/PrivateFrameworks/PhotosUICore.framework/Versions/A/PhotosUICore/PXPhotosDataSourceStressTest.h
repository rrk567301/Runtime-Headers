@class NSArray, NSDictionary, PXPhotosDataSource;

@interface PXPhotosDataSourceStressTest : PXObservable {
    BOOL _isPrepared;
    NSArray *_categories;
    NSDictionary *_assetsByCategory;
    unsigned long long _sampleLength;
    unsigned long long _sampleIndex;
}

@property (retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *dataSource;
@property (nonatomic, setter=_setDataSourceIndex:) unsigned long long dataSourceIndex;
@property (nonatomic) unsigned long long maximumAssetCount;
@property (nonatomic) double updateInterval;
@property (nonatomic, getter=isRunning) BOOL running;

- (void).cxx_destruct;
- (id)init;
- (void)_prepare;
- (id)mutableChangeObject;
- (id)_categoryForAsset:(id)a0;
- (void)_updateDataSource;

@end
