@interface NEIKEv2RekeyChildContext : NEIKEv2RequestContext {
    unsigned int _childID;
}

- (int)requestType;
- (id)description;

@end
