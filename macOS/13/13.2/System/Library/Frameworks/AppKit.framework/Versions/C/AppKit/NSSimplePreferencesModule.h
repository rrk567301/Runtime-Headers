@class NSString, NSView, NSImage, NSUserDefaultsController;

@interface NSSimplePreferencesModule : NSPreferencesModule

@property (retain) NSView *rootView;
@property (copy) NSString *title;
@property (retain) NSImage *toolbarIcon;
@property (copy) NSString *helpAnchor;
@property (copy) NSString *helpBook;
@property (copy) NSString *applicationGroupContainerIdentifier;
@property (retain) NSUserDefaultsController *userDefaultsController;

- (void)dealloc;
- (id)preferencesNibName;
- (id)viewForPreferenceNamed:(id)a0;
- (id)titleForIdentifier:(id)a0;
- (id)imageForPreferenceNamed:(id)a0;
- (BOOL)isResizable;

@end
