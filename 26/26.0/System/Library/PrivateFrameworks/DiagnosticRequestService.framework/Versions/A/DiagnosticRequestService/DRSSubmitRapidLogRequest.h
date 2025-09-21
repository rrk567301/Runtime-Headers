@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed;
@property (retain, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (unsigned char)maxUploadAttemptCount;
+ (id)entityName;
+ (Class)_moClass;

- (unsigned long long)expectedType;
- (unsigned long long)logSizeLimitBytes;
- (id)initWithXPCDict:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)requestType;
- (id)debugDescription;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)targetContainerName;
- (void).cxx_destruct;

@end
