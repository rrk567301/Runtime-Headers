@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

+ (id)entityName;
+ (Class)_moClass;

- (id)requestType;
- (id)initWithXPCDict:(id)a0;
- (unsigned long long)expectedType;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (unsigned long long)logSizeLimitBytes;
- (id)targetContainerName;

@end
