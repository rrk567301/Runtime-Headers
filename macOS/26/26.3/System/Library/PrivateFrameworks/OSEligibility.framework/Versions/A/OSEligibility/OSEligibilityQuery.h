@protocol OS_xpc_object;

@interface OSEligibilityQuery : NSObject

@property (nonatomic, readonly) unsigned long long answer;
@property (nonatomic, readonly) unsigned long long answerSource;
@property (nonatomic, readonly) id<OS_xpc_object> status;
@property (nonatomic, readonly) id<OS_xpc_object> context;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDomain:(unsigned long long)a0 auditToken:(struct { unsigned int x0[8]; })a1 error:(id *)a2;
- (id)initWithDomain:(unsigned long long)a0 bundleID:(id)a1 persona:(id)a2 error:(id *)a3;
- (id)initWithDomain:(unsigned long long)a0 error:(id *)a1;

@end
