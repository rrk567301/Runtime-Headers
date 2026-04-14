@class HMCRedirectorTuple;

@interface HMCRedirectorStrongTuple : HMFObject {
    HMCRedirectorTuple *_tuple;
    id _target;
    SEL _selector;
}

- (id)description;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
