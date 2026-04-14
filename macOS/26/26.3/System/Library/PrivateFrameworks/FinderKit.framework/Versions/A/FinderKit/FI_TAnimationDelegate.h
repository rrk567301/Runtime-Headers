@class NSString, NSObject;
@protocol CAAnimationDelegate;

@interface FI_TAnimationDelegate : NSObject <CAAnimationDelegate> {
    struct TNSWeakPtr<NSObject<CAAnimationDelegate>> { NSObject<CAAnimationDelegate> *fWeakObject; } _weakDelegate;
}

@property (weak, nonatomic) NSObject<CAAnimationDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)animationDidStart:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
