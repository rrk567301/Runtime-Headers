@class NSString;

@interface SCTAccessibilityGRL : SCTGRL {
    NSString *mRole;
    NSString *mSubrole;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)perform;
- (id)init;
- (void)dealloc;
- (void)hide:(id)a0;
- (BOOL)isWindow;
- (void)show;
- (void)delayedShowcase:(id)a0;
- (void)doFinishShow;
- (void)enumerateDescendants:(id)a0 ofResource:(id)a1;
- (void)extractElementPath:(struct __AXUIElement { } *)a0;
- (id)fullTitle;
- (id)initWithElement:(struct __AXUIElement { } *)a0 withParent:(id)a1;
- (id)initWithRootAttribute:(struct __CFString { } *)a0;
- (id)resolveFromContainer:(id)a0;
- (void)resolveResourceAndInvoke:(id)a0;

@end
