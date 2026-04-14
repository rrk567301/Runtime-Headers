@class NSSet;

@interface ATXWidgetLogUploadAllowList : NSObject {
    BOOL _allowListEnabled;
    NSSet *_allowedWidgetBundleIds;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssets:(id)a0;
- (BOOL)logUploadAllowedForWidgetBundleId:(id)a0;

@end
