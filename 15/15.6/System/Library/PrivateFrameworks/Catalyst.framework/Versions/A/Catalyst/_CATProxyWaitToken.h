@class NSObject;
@protocol OS_dispatch_group;

@interface _CATProxyWaitToken : NSObject {
    _Atomic BOOL mFinished;
    NSObject<OS_dispatch_group> *mGroup;
}

@property (readonly, nonatomic) char isExclusive;
@property (readonly, nonatomic) id resourceProxy;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (id)initWithExclusive:(char)a0 group:(id)a1;
- (void)notifyWithResourceProxy:(id)a0;

@end
