@class MTLBindingInternal;

@interface MTLArgumentInternal : MTLArgument {
    MTLBindingInternal *_binding;
}

- (id)initWithBinding:(id)a0;
- (void)dealloc;

@end
