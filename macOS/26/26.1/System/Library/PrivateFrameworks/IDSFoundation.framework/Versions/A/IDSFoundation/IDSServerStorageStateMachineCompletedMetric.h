@class NSString, NSNumber, NSDictionary;

@interface IDSServerStorageStateMachineCompletedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) long long linkType;
@property (readonly, nonatomic) BOOL wasPrimary;
@property (readonly, nonatomic) double timeTaken;
@property (readonly, nonatomic) long long messagesProcessed;
@property (readonly, nonatomic) long long roundsProcessed;
@property (readonly, nonatomic) long long serverTimeoutCount;
@property (readonly, nonatomic) long long clientTimeoutCount;
@property (readonly, nonatomic) long long terminationReason;
@property (readonly, nonatomic) NSNumber *storageCheckVersion;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 linkType:(long long)a1 wasPrimary:(BOOL)a2 timeTaken:(double)a3 messagesProcessed:(long long)a4 roundsProcessed:(long long)a5 serverTimeoutCount:(long long)a6 clientTimeoutCount:(long long)a7 terminationReason:(long long)a8 storageCheckVersion:(id)a9;

@end
