@interface DRSSubmitLogRequest : DRSRequest

+ (id)entityName;
+ (Class)_moClass;

- (unsigned long long)expectedType;
- (void)_configureRequestMO:(id)a0;
- (id)requestType;
- (id)replyForMessage:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)a0;

@end
