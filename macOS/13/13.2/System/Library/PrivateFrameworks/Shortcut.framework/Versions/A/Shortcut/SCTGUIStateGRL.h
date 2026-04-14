@interface SCTGUIStateGRL : SCTGRL {
    id mState;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)state;
- (void)setState:(id)a0;
- (void)perform;
- (void)show;
- (id)fullTitle;
- (id)representativeIconForSelectedState:(BOOL)a0;
- (void)resolveResourceAndInvoke:(id)a0;
- (id)resolveFromContainer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenRectForResource;
- (Class)resolverClass;
- (id)initWithState:(id)a0 withParent:(id)a1;

@end
