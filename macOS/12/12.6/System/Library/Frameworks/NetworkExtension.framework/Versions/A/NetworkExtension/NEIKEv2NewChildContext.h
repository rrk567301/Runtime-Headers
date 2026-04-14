@class NEIKEv2ChildSA;

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext

@property (retain, nonatomic) NEIKEv2ChildSA *childSA;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChildSA:(id)a0;

@end
