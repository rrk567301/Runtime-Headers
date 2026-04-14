@protocol NSStreamDelegate;

@interface NSCFStreamWeakDelegateWrapper : NSObject {
    id<NSStreamDelegate> _object;
    BOOL _useFallback;
}

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (id)retainedDelegate;

@end
