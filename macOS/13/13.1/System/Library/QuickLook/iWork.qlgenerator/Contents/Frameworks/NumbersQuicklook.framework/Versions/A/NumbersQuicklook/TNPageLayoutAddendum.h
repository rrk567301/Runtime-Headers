@interface TNPageLayoutAddendum : TNPageLayoutContainer

- (struct CGColor { } *)backgroundColor;
- (void)updateChildrenFromInfo;
- (BOOL)wantsOverlayContentLayout;
- (Class)contentLayoutClassOverride;

@end
