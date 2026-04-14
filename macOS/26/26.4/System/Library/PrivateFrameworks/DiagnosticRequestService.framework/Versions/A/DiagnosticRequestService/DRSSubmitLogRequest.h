@interface DRSSubmitLogRequest : DRSRequest

+ (id)entityName;
+ (Class)_moClass;

- (BOOL)isEqualToRequest:(id)a0;
- (id)requestType;
- (void)_configureRequestMO:(id)a0;
- (unsigned long long)expectedType;
- (id)replyForMessage:(id)a0;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)a0;

@end
