@class NSArray, CAStateController, NSString, CALayer, NSObject, NSDictionary;
@protocol CAStateControllerDelegate;

@interface SiriUICAPackageView : NSView <CAStateControllerDelegate> {
    CAStateController *_stateController;
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;
    CALayer *_rootLayer;
    struct CGSize { double width; double height; } _originalSize;
    NSString *_pendingCompletionToState;
    NSString *_pendingCompletionFromState;
    id /* block */ _pendingCompletion;
    NSDictionary *_publishedObjectMap;
}

@property (readonly, copy, nonatomic) NSArray *publishedObjectNames;
@property (nonatomic) long long contentMode;
@property (weak, nonatomic) NSObject<CAStateControllerDelegate> *stateControllerDelegate;

- (void).cxx_destruct;
- (char)setState:(id)a0;
- (void)layout;
- (char)setState:(id)a0 animated:(char)a1;
- (id)publishedObjectWithName:(id)a0;
- (void)stateController:(id)a0 didSetStateOfLayer:(id)a1;
- (void)stateController:(id)a0 transitionDidStart:(id)a1 speed:(float)a2;
- (void)stateController:(id)a0 transitionDidStop:(id)a1 completed:(char)a2;
- (id)initWithPackageName:(id)a0 inBundle:(id)a1;
- (char)setState:(id)a0 animated:(char)a1 transitionSpeed:(double)a2 completion:(id /* block */)a3;
- (char)setState:(id)a0 onLayer:(id)a1 animated:(char)a2 transitionSpeed:(double)a3 completion:(id /* block */)a4;
- (void)_clearPendingCompletion;
- (void)_setPendingCompletion:(id /* block */)a0 fromState:(id)a1 toState:(id)a2;
- (id)initWithPackageName:(id)a0 inBundle:(id)a1 contentMode:(long long)a2;
- (char)setState:(id)a0 completion:(id /* block */)a1;

@end
