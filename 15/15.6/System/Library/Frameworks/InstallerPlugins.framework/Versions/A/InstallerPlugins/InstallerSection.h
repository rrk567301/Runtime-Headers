@class InstallerPane, NSString, InstallerState, NSMutableDictionary, IFDocument, NSBundle, NSObject, NSWindow, IFDInstallController;
@protocol InstallerSectionController;

@interface InstallerSection : NSObject {
    InstallerPane *firstPane;
    struct InstallerSection_Private { id x0; id x1; char x2; char x3; id x4; } *_private;
}

@property (readonly) NSMutableDictionary *privateSharedDictionary;
@property (readonly) char _loading;
@property (readonly) char _loaded;
@property (readonly) char _loadMainNib;
@property (readonly) IFDocument *distribution;
@property (readonly) IFDInstallController *installController;
@property (readonly) NSWindow *window;
@property (readonly) NSObject<InstallerSectionController> *_sectionController;
@property (readonly) NSBundle *bundle;
@property (readonly) NSString *title;
@property (readonly) InstallerPane *firstPane;
@property (readonly) char shouldLoad;
@property (readonly) InstallerState *installerState;
@property (readonly) InstallerPane *activePane;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithBundle:(id)a0;
- (void)awakeFromNib;
- (id)sharedDictionary;
- (void)closeWindow:(id)a0;
- (id)localizedFormattedStringForKey:(id)a0;
- (void)unloadResources;
- (void)willLoadMainNib;
- (void)_setSectionController:(id)a0;
- (void)didEnterPane:(id)a0 inDirection:(long long)a1;
- (void)didExitPane:(id)a0 inDirection:(long long)a1;
- (void)didLoadMainNib;
- (char)gotoPane:(id)a0;
- (id)localizedFormattedStringForKey:(id)a0 withArguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (id)nextPaneForActivePane:(id)a0;
- (id)provides;
- (void)setFirstPane:(id)a0;
- (char)shouldExitPane:(id)a0 inDirection:(long long)a1;
- (void)willEnterPane:(id)a0 inDirection:(long long)a1;
- (void)willExitPane:(id)a0 inDirection:(long long)a1;

@end
