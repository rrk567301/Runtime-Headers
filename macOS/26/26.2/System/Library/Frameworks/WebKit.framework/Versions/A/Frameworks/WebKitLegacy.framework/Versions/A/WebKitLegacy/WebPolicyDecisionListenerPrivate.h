@interface WebPolicyDecisionListenerPrivate : NSObject {
    struct RetainPtr<id> { id m_ptr; } target;
    SEL action;
}

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id).cxx_construct;

@end
