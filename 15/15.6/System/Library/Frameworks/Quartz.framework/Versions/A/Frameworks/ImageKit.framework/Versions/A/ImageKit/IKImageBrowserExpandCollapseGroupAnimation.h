@interface IKImageBrowserExpandCollapseGroupAnimation : IKAnimationGroup {
    char _initialized;
    double _tailOffset0;
    double _headerOffset0;
    id _group;
}

- (void)dealloc;
- (void)setGroup:(id)a0;
- (id)group;
- (char)animationManager:(id)a0 processStep:(id)a1;
- (char)handleChannel:(id)a0;

@end
