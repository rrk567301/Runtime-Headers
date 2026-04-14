@interface _NSEventObserver : NSObject {
    unsigned long long _mask;
    id _block;
}

- (void)invalidate;
- (void)dealloc;
- (id)initMatchingEvents:(unsigned long long)a0 handler:(id)a1;

@end
