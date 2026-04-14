@class NSError;

@interface NEIKEv2DeleteChildContext : NEIKEv2RequestContext {
    unsigned int _childID;
    NSError *_reasonError;
}

- (id)description;
- (int)requestType;
- (void).cxx_destruct;

@end
