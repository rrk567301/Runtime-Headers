@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed;
@property (retain, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (id)entityName;
+ (unsigned char)maxUploadAttemptCount;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)debugDescription;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)targetContainerName;
- (id)requestType;
- (unsigned long long)logSizeLimitBytes;
- (void)_configureRequestMO:(id)a0;
- (unsigned long long)expectedType;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (void).cxx_destruct;

@end
