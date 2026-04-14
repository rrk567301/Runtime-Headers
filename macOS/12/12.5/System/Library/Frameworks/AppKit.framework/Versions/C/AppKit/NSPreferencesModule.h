@class NSView;

@interface NSPreferencesModule : NSObject <NSPreferencesModule> {
    struct CGSize { double width; double height; } _minSize;
    BOOL _hasChanges;
    void *_reserved;
}

@property (retain) NSView *preferencesView;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)helpAnchor;
- (struct CGSize { double x0; double x1; })minSize;
- (BOOL)isResizable;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (id)preferencesNibName;
- (id)viewForPreferenceNamed:(id)a0;
- (id)titleForIdentifier:(id)a0;
- (id)imageForPreferenceNamed:(id)a0;
- (id)helpBook;
- (void)didChange;
- (BOOL)hasChangesPending;
- (void)saveChanges;
- (BOOL)moduleCanBeRemoved;
- (void)moduleWillBeRemoved;
- (void)initializeFromDefaults;
- (void)willBeDisplayed;
- (void)moduleWasInstalled;
- (BOOL)preferencesWindowShouldClose;
- (void)set_preferencesView:(id)a0;

@end
