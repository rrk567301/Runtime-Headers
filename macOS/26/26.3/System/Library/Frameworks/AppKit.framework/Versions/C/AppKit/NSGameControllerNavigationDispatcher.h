@class NSMutableDictionary, NSGameControllerNavigationSession;

@interface NSGameControllerNavigationDispatcher : NSObject {
    BOOL _shouldRepeat;
}

@property (copy) NSMutableDictionary *bindings;
@property double lastDispatch;
@property (weak) NSGameControllerNavigationSession *session;

- (void)dispatchEvent:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateBinding:(id)a0;
- (id)bindingForCommand:(id)a0 inWindow:(id)a1;
- (id)initWithSession:(id)a0 shouldRepeat:(BOOL)a1;
- (void)invalidateBindings;

@end
