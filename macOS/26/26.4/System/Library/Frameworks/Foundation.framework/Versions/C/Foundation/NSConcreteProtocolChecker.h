@class Protocol, NSObject;

@interface NSConcreteProtocolChecker : NSProtocolChecker {
    NSObject *_target;
    Protocol *_protocol;
}

- (id)protocol;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (void)dealloc;
- (id)target;

@end
