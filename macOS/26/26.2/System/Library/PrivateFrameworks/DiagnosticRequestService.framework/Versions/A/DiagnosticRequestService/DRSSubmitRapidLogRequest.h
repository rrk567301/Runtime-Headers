@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed;
@property (retain, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (id)entityName;
+ (unsigned char)maxUploadAttemptCount;
+ (Class)_moClass;

- (unsigned long long)logSizeLimitBytes;
- (id)initWithXPCDict:(id)a0;
- (unsigned long long)expectedType;
- (BOOL)isEqualToRequest:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (id)targetContainerName;
- (id)debugDescription;
- (id)requestType;
- (void).cxx_destruct;

@end
