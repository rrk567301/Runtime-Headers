@class IDSIDQueryController, NSArray, IDSSendMessagePolicy, NSString, NSDictionary, IDSSendMessagePolicyResult;

@interface IDSIDQueryMessagePolicyEngine : NSObject

@property (nonatomic, readonly) IDSIDQueryController *queryController;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applyPolicy:(IDSSendMessagePolicy *)a0 toURIs:(NSArray *)a1 forService:(NSString *)a2 completion:(void (^)(NSDictionary *, NSDictionary *, IDSSendMessagePolicyResult *))a3;
- (id)initWithQueryController:(id)a0;

@end
