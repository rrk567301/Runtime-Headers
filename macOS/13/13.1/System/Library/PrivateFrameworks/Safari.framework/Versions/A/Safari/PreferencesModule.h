@class NSString, NSWindow;

@interface PreferencesModule : NSPreferencesModule

@property (nonatomic) double preferredMinWidth;
@property (readonly, nonatomic) NSString *safariHelpAnchor;
@property (readonly, nonatomic) NSWindow *preferencesWindowIfMain;

- (id)imageForPreferenceNamed:(id)a0;
- (BOOL)isResizable;
- (void)moduleWasInstalled;
- (void)willBeDisplayed;
- (BOOL)snapshotsOfPreferencesWindowArePermitted;
- (void)openHelpPage:(id)a0;
- (void)_layoutSubtreeIfNeededAndResizeWindowWithContainer:(id)a0 originalContainerHeight:(double)a1;
- (void)resizeWindowUsingAutoLayout;
- (void)addSubviewsUsingAutoLayout:(id)a0 toView:(id)a1 withConstraints:(id)a2;
- (void)addSubviewsUsingAutoLayout:(id)a0 toView:(id)a1 withConstraints:(id)a2 resizeContainer:(BOOL)a3;
- (void)removeViewsUsingAutoLayout:(id)a0;
- (void)removeViewsUsingAutoLayout:(id)a0 resizeContainer:(BOOL)a1;
- (void)removeRowUsingAutoLayout:(long long)a0 fromMatrix:(id)a1;

@end
