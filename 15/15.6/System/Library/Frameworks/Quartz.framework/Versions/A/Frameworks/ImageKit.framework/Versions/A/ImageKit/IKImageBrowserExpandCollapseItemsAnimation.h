@interface IKImageBrowserExpandCollapseItemsAnimation : IKImageBrowserReorderAnimation {
    char _expandMode;
    id _group;
}

- (void)dealloc;
- (void)setGroup:(id)a0;
- (id)group;
- (char)animationManager:(id)a0 processCell:(id)a1 channel:(id)a2;
- (char)expandMode;
- (void)setExpandMode:(char)a0;

@end
