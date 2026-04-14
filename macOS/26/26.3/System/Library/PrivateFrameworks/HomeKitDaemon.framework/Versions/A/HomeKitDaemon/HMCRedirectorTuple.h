@class HMCRedirector;

@interface HMCRedirectorTuple : HMFObject <HMFCancellable> {
    HMCRedirector *_owner;
    id _target;
    SEL _selector;
}

- (void)cancel;
- (id)description;
- (id)attributeDescriptions;
- (void).cxx_destruct;

@end
