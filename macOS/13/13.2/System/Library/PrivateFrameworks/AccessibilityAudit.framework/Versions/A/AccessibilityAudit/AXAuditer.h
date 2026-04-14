@class NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AXAuditerDelegate;

@interface AXAuditer : NSObject <AXAuditCategoryResultDelegate, AXAuditCategoryDelegate>

@property (retain, nonatomic) NSArray *_auditCategories;
@property (retain, nonatomic) NSMutableArray *_results;
@property (retain, nonatomic) NSArray *_currentTypesToAuditFor;
@property (weak, nonatomic) id<AXAuditerDelegate> delegate;
@property (nonatomic) int targetPid;
@property (nonatomic) unsigned long long categoryType;
@property (retain, nonatomic) NSMutableArray *currentRunningCategories;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *auditQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)_currentTime;
- (id)detectionResultsFromImageData:(id)a0;
- (void)auditCategoryResult:(id)a0 didAppendLogWithMessage:(id)a1;
- (void)auditCategory:(id)a0 didEncounterIssue:(id)a1;
- (void)didCompleteCategory:(id)a0;
- (void)_initializeAuditCategories;
- (id)_allCategoriesDescription;
- (id)_auditCategoryForClass:(Class)a0;
- (id)allSupportedAuditTypes;
- (void)_clearCurrentRunningCategories;
- (void)startWithAuditTypes:(id)a0;
- (void)runCategories:(id)a0;
- (void)_runCategories:(id)a0;

@end
