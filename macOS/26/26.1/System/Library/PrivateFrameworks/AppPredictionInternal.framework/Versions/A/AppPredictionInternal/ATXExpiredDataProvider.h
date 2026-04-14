@class ATXHistogramBundleIdTable, _ATXAppInfoManager;

@interface ATXExpiredDataProvider : NSObject <ATXExpiredDataProviderProtocol> {
    _ATXAppInfoManager *_appInfoManager;
    ATXHistogramBundleIdTable *_histogramBundleIdTable;
}

- (void).cxx_destruct;
- (id)init;
- (id)expiredActionKeysFromExpiredBundleIds:(id)a0;
- (id)expiredBundleIds;
- (id)expiredBundleIdsAndActionKeys;
- (id)initWithAppInfoManager:(id)a0 histogramBundleIdTable:(id)a1;

@end
