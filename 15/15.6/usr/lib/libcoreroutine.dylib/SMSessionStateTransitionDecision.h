@interface SMSessionStateTransitionDecision : NSObject

@property char isAllowed;
@property (copy) id /* block */ actionBlock;

- (void).cxx_destruct;
- (id)initWithIsAllowed:(char)a0 actionBlock:(id /* block */)a1;

@end
