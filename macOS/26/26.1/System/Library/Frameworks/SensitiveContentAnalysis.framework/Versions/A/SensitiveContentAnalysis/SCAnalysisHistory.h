@class NSArray, NSDictionary, NSError;

@interface SCAnalysisHistory : NSObject

+ (void)analysesForInterventionOnOutgoingCallToParticipants:(NSArray *)a0 callType:(unsigned long long)a1 completion:(void (^)(NSDictionary *, NSError *))a2;
+ (void)shouldBlockIncomingCallFromHandles:(NSArray *)a0 callType:(unsigned long long)a1 completion:(void (^)(BOOL))a2;
+ (BOOL)shouldDeclineIncomingCallFromParticipants:(id)a0 callType:(unsigned long long)a1;
+ (BOOL)willNeedInterventionForOutgoingCallToParticipants:(id)a0 callType:(unsigned long long)a1 error:(id *)a2;

- (id)init;

@end
