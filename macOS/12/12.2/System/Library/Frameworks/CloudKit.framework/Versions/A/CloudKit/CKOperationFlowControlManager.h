@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {
    NSMutableDictionary *_flowControlledOperationKeys;
}

- (id)init;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)unlimitAllOperations;
- (BOOL)isOperationLimited:(id)a0 outLimitError:(id *)a1;
- (double)secondsUntilUnlimited:(id)a0;
- (void)limitOperation:(id)a0 retryAfter:(id)a1 error:(id)a2;

@end
