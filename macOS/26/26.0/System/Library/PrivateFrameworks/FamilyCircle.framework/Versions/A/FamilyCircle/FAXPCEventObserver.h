@interface FAXPCEventObserver : NSObject {
    void /* unknown type, empty encoding */ stream;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ handlers;
}

- (void)start;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0 delegate:(id)a1;

@end
