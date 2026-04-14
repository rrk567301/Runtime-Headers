@class NSString, NSDictionary;

@interface IDSFirstUnlockBatchProcessingMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) double totalProcessingTime;
@property (readonly, nonatomic) long long totalMessageCount;
@property (readonly, nonatomic) long long clientTimeoutCount;
@property (readonly, nonatomic) long long batchsetCount;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 totalProcessingTime:(double)a1 totalMessageCount:(long long)a2 clientTimeoutCount:(long long)a3 batchsetCount:(long long)a4;

@end
