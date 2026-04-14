@interface _NSThemeZoomWidget : _NSThemeWidget

+ (void)initialize;
+ (id)zoomWidgetInView:(id)a0 withButtonID:(long long)a1 action:(SEL)a2;

- (void)flagsChanged;
- (BOOL)worksWhenModal;

@end
