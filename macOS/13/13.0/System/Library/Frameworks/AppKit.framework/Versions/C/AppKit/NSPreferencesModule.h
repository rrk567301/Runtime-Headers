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
- (id)preferencesNibName;
- (id)viewForPreferenceNamed:(id)a0;
- (id)titleForIdentifier:(id)a0;
- (id)imageForPreferenceNamed:(id)a0;
- (BOOL)isResizable;
- (id)helpBook;
- (void)didChange;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (BOOL)hasChangesPending;
- (void)saveChanges;
- (void)willBeDisplayed;
- (void)initializeFromDefaults;
- (BOOL)moduleCanBeRemoved;
- (BOOL)preferencesWindowShouldClose;
- (void)set_preferencesView:(id)a0;

@end
