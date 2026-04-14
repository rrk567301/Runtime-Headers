@interface __NSMessageBuilder {
    Class isa;
    id _target;
    id *_addr;
}

+ (void)initialize;

- (void)forwardInvocation:(id)a0;
- (void)finalize;
- (id)methodSignatureForSelector:(SEL)a0;

@end
