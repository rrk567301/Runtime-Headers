@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSafariWebCompatibilityFeedbackSyncEngine : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (class, readonly, nonatomic) NSArray *issueCategories;

+ (id)stringForCategory:(long long)a0;
+ (id)stringForSubCategory:(long long)a0;
+ (id)subCategoriesForIssueCategory:(long long)a0;
+ (id)telemetryStringForCategory:(long long)a0;
+ (id)telemetryStringForSubCategory:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (void)saveWebCompatibilityFeedback:(id)a0 completionHandler:(id /* block */)a1;

@end
