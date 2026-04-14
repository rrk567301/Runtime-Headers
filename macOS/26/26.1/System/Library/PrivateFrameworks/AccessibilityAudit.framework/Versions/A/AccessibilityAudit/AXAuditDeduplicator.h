@class AXAuditDeduplicatorHeuristics, AXAuditDeduplicatorModels, NSObject;
@protocol OS_os_log;

@interface AXAuditDeduplicator : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) AXAuditDeduplicatorModels *models;
@property (retain) AXAuditDeduplicatorHeuristics *heuristics;

+ (void)downloadUIUnderstandingAssetsIfNeeded;
+ (BOOL)isFrameworkAvailable;

- (void).cxx_destruct;
- (id)init;
- (int)findNewIssues:(id)a0 forPlatform:(id)a1;
- (struct CGImage { } *)getCGImageForIssue:(id)a0;
- (BOOL)modelsAvailableForPlatform:(id)a0;

@end
