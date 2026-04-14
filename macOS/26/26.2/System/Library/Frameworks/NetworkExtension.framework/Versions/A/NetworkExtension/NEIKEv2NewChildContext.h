@class NEIKEv2ChildSA;

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext {
    NEIKEv2ChildSA *_childSA;
}

- (int)requestType;
- (void).cxx_destruct;
- (id)description;

@end
