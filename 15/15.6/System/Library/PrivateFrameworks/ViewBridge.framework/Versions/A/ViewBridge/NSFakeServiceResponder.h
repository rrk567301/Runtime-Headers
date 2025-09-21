@class NSString, NSRemoteView;

@interface NSFakeServiceResponder : NSObject <NSServiceViewControllerActionResponder> {
    SEL _action;
    unsigned int _rtsInProgress;
    NSRemoteView *_remoteView;
    struct { char responds; char response; } _validateMenuItem;
    struct { char responds; char response; } _validateUserInterfaceItem;
    NSString *_targetIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

- (oneway void)release;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (id)retain;
- (char)validateMenuItem:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (id)initWithView:(id)a0 action:(SEL)a1 validateMenuItem:(struct { char x0; char x1; })a2 validateUserInterfaceItem:(struct { char x0; char x1; })a3 targetIdentifier:(id)a4;
- (char)respondsToAction:(SEL)a0 fromTask:(struct { unsigned int x0[8]; })a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
