@interface FAXPCEventObserver : NSObject {
    void /* unknown type, empty encoding */ stream;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ handlers;
}

- (void).cxx_destruct;
- (id)init;
- (void)start;
- (id)initWithStream:(id)a0 delegate:(id)a1;

@end
