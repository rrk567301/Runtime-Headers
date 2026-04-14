@interface __NSMessageBuilder {
    Class isa;
    id _target;
    id *_addr;
}

+ (void)initialize;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)finalize;

@end
