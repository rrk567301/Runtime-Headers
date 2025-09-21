@class HMCRedirectorTuple;

@interface HMCRedirectorStrongTuple : HMFObject {
    HMCRedirectorTuple *_tuple;
    id _target;
    SEL _selector;
}

- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
