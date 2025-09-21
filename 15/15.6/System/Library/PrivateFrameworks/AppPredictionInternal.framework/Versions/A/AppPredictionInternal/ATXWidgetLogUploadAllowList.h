@class NSSet;

@interface ATXWidgetLogUploadAllowList : NSObject {
    char _allowListEnabled;
    NSSet *_allowedWidgetBundleIds;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0;
- (char)logUploadAllowedForWidgetBundleId:(id)a0;

@end
