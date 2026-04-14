@class HMCRedirectorTuple;

@interface HMCRedirectorStrongTuple : HMFObject {
    HMCRedirectorTuple *_tuple;
    id _target;
    SEL _selector;
}

- (unsigned long long)hash;
- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
