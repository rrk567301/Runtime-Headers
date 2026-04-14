@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed;
@property (retain, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (id)entityName;
+ (Class)_moClass;
+ (unsigned char)maxUploadAttemptCount;

- (id)initWithXPCDict:(id)a0;
- (unsigned long long)expectedType;
- (unsigned long long)logSizeLimitBytes;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)requestType;
- (void)_configureRequestMO:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (id)targetContainerName;

@end
