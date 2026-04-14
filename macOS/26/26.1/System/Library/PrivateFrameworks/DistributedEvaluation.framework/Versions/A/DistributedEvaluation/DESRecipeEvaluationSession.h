@class DESRecipe, NSString, NSURL, NSDate, DESRecordSet, NSObject;
@protocol OS_xpc_object;

@interface DESRecipeEvaluationSession : NSObject {
    NSDate *_startDate;
    NSURL *_baseURL;
    NSString *_localeIdentifier;
    NSDate *_deadline;
    NSDate *_deferralDate;
    double _resumeTimestamp;
    Class _protocolClass;
    BOOL _wasResumedFromURL;
}

@property (readonly, nonatomic) DESRecipe *recipe;
@property (readonly, nonatomic) DESRecordSet *matchingRecordSet;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;

- (BOOL)taskIsDeferred;
- (void).cxx_destruct;
- (id)_initWithResumptionURL:(id)a0 recordSet:(id)a1 protocolClass:(Class)a2 error:(id *)a3;
- (void)completeWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeWithJSONResult:(id)a0 binaryResult:(id)a1 completionHandler:(id /* block */)a2;
- (id)deferWithDeadline:(id)a0 error:(id *)a1;
- (void)downloadAttachmentsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)initWithResumptionURL:(id)a0 error:(id *)a1;

@end
