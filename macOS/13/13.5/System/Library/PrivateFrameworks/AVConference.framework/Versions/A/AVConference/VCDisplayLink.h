@interface VCDisplayLink : VCObject {
    struct __CVDisplayLink { } *_displayLinkRef;
    unsigned long long _state;
    id /* block */ _handler;
}

- (void)dealloc;
- (void)invalidate;
- (BOOL)activate;
- (void)deactivate;
- (id)initWithHandler:(id /* block */)a0;
- (id)initWithHandler:(id /* block */)a0 threadPriority:(unsigned int)a1 threadOptions:(unsigned int)a2 threadIdentifier:(id)a3;

@end
