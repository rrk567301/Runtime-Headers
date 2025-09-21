@interface TNPageLayoutAddendum : TNPageLayoutContainer

- (struct CGColor { } *)backgroundColor;
- (void)updateChildrenFromInfo;
- (Class)contentLayoutClassOverride;
- (char)wantsOverlayContentLayout;

@end
