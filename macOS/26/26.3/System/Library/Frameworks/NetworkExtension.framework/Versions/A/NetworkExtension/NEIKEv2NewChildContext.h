@class NEIKEv2ChildSA;

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext {
    NEIKEv2ChildSA *_childSA;
}

- (id)description;
- (int)requestType;
- (void).cxx_destruct;

@end
