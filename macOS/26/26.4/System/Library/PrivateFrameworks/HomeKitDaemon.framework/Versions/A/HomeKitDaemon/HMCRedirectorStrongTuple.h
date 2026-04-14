@class HMCRedirectorTuple;

@interface HMCRedirectorStrongTuple : HMFObject {
    HMCRedirectorTuple *_tuple;
    id _target;
    SEL _selector;
}

- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
