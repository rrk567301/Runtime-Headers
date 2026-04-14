@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed;
@property (retain, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (unsigned char)maxUploadAttemptCount;
+ (id)entityName;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (id)debugDescription;
- (unsigned long long)expectedType;
- (id)targetContainerName;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (void)_configureRequestMO:(id)a0;
- (id)requestType;
- (void).cxx_destruct;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (unsigned long long)logSizeLimitBytes;

@end
