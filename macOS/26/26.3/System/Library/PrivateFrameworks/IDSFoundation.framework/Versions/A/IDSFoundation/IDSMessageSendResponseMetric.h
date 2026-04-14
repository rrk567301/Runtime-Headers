@class NSString, NSNumber, NSDictionary;

@interface IDSMessageSendResponseMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) long long responseCode;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSNumber *command;
@property (readonly, nonatomic) BOOL hasDataToEncrypt;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) BOOL ckvOptedIn;
@property (readonly, nonatomic) BOOL ckvAppliedEnforcment;
@property (readonly, nonatomic) long long ckvEnforcementMetricType;
@property (readonly, nonatomic) long long ckvEnforcementCode;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResponseCode:(long long)a0 service:(id)a1 command:(id)a2 hasDataToEncrypt:(BOOL)a3 messageType:(long long)a4 ckvOptedIn:(BOOL)a5 ckvAppliedEnforcment:(BOOL)a6 ckvEnforcementMetricType:(long long)a7 ckvEnforcementCode:(long long)a8;

@end
