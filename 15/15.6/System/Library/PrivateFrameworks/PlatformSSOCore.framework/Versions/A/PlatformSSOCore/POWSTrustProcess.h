@interface POWSTrustProcess : NSObject

@property (nonatomic) char parseWSTrust13;
@property (nonatomic) char parseWSTrust2005;

- (id)init;
- (id)createWSTrust13Request:(id)a0;
- (id)createWSTrust13Response:(id)a0;
- (id)createWSTrust2005Request:(id)a0;
- (id)createWSTrust2005Response:(id)a0;
- (id)createWSTrustFault:(id)a0;
- (id)parseMexResponse:(id)a0 namespaces:(id)a1 policyXPath:(id)a2 action:(id)a3;
- (id)parseWSTrustMexResponse:(id)a0 version:(unsigned long long)a1;
- (id)parseWSTrustRequest:(id)a0 version:(unsigned long long)a1;
- (id)parseWSTrustResponse:(id)a0 version:(unsigned long long)a1;

@end
