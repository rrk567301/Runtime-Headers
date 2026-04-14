@class NEIKEv2ChildSA;

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext {
    NEIKEv2ChildSA *_childSA;
}

- (int)requestType;
- (id)description;
- (void).cxx_destruct;

@end
