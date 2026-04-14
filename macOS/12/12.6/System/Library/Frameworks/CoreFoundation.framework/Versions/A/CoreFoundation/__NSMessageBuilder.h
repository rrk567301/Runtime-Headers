@interface __NSMessageBuilder {
    Class isa;
    id _target;
    id *_addr;
}

+ (void)initialize;

- (void)finalize;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
