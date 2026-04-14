@class NSError;

@interface NEIKEv2DeleteChildContext : NEIKEv2RequestContext {
    unsigned int _childID;
    NSError *_reasonError;
}

- (int)requestType;
- (void).cxx_destruct;
- (id)description;

@end
