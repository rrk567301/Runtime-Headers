@class NSNumber;

@interface CLEEDFeedbackRequest : CLEEDRequest

@property (nonatomic) long long feedbackVersion;
@property (nonatomic) BOOL callRelatedToEmergency;
@property (nonatomic) NSNumber *callerResponsive;
@property (nonatomic) long long callTrigger;
@property (nonatomic) long long callReason;
@property (nonatomic) NSNumber *respondersDispatched;

- (id)initWithDictionary:(id)a0 error:(long long *)a1;
- (void)dealloc;
- (id)description;
- (id)getBooleanAsNumberFromDictionary:(id)a0 key:(id)a1;
- (id)getIntegerAsNumberFromDictionary:(id)a0 key:(id)a1;
- (id)getRequestDict;
- (id)initWithDictionary:(id)a0 decryptedRequestData:(id)a1 baseURL:(id)a2 error:(long long *)a3;
- (id)initWithID:(id)a0 psapID:(id)a1 partnerID:(id)a2 geofenceID:(id)a3 requestDate:(id)a4 state:(long long)a5 feedbackVersion:(long long)a6 callRelatedToEmergency:(BOOL)a7 callerResponsive:(id)a8 callTrigger:(long long)a9 callReason:(long long)a10 respondersDispatched:(id)a11;

@end
