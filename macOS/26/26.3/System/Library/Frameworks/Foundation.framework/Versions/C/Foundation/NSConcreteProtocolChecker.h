@class Protocol, NSObject;

@interface NSConcreteProtocolChecker : NSProtocolChecker {
    NSObject *_target;
    Protocol *_protocol;
}

- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (id)protocol;
- (void)dealloc;
- (id)target;

@end
