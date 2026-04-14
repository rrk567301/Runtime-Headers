@class NSString;

@interface SCTAccessibilityGRL : SCTGRL {
    NSString *mRole;
    NSString *mSubrole;
}

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)hide:(id)a0;
- (void)perform;
- (void)show;
- (id)fullTitle;
- (void)resolveResourceAndInvoke:(id)a0;
- (id)resolveFromContainer:(id)a0;
- (void)enumerateDescendants:(id)a0 ofResource:(id)a1;
- (void)delayedShowcase:(id)a0;
- (void)extractElementPath:(struct __AXUIElement { } *)a0;
- (id)initWithElement:(struct __AXUIElement { } *)a0 withParent:(id)a1;
- (id)initWithRootAttribute:(struct __CFString { } *)a0;
- (BOOL)isWindow;
- (void)doFinishShow;

@end
