@interface IKImageBrowserExpandCollapseGroupAnimation : IKAnimationGroup {
    BOOL _initialized;
    double _tailOffset0;
    double _headerOffset0;
    id _group;
}

- (void)dealloc;
- (void)setGroup:(id)a0;
- (id)group;
- (BOOL)handleChannel:(id)a0;
- (BOOL)animationManager:(id)a0 processStep:(id)a1;

@end
