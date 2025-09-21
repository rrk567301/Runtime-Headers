@class Protocol, NSObject;

@interface NSConcreteProtocolChecker : NSProtocolChecker {
    NSObject *_target;
    Protocol *_protocol;
}

- (void)dealloc;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (id)target;
- (id)protocol;

@end
