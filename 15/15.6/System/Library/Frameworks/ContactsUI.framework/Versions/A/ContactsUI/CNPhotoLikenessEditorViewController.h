@class NSTreeController, NSArray, NSArrayController, NSSet, NSMutableDictionary, NSString, NSMutableSet, NSMutableArray, CNPhotoLikenessEditorView, NSImage, MLMediaLibrary;
@protocol CNCancelable;

@interface CNPhotoLikenessEditorViewController : CNLikenessEditorViewController <CNPhotoLikenessEditorCroppingDataSource>

@property (retain) CNPhotoLikenessEditorView *mainView;
@property (retain) MLMediaLibrary *mediaLibrary;
@property (retain) NSMutableDictionary *rootGroupsByMediaSourceIdentifier;
@property (retain) NSMutableArray *rootGroups;
@property (retain) NSTreeController *groupsTreeController;
@property (retain) NSArrayController *objectsArrayController;
@property (retain) NSArrayController *defaultPhotosArrayController;
@property (retain) NSMutableSet *observedMediaSources;
@property (retain) NSSet *foundSources;
@property unsigned long long numRootGroupsLoaded;
@property char viewHasLoaded;
@property (retain) NSArray *defaultPhotos;
@property char userSetup;
@property (retain) NSMutableDictionary *rootGroupIDToObjectMap;
@property (retain) id<CNCancelable> imageRepresentationOfItemChangedToken;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain) NSImage *image;
@property (retain) NSMutableArray *visibleRootGroups;
@property (readonly) double viewFinderDiameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (void)applyConfiguration:(unsigned long long)a0 toEditor:(id)a1;
+ (unsigned long long)configurationOfEditorGivenImage:(id)a0 editorHost:(id)a1 isMeContact:(char)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)paste:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (id)likeness;
- (void)imageBrowserSelectionDidChange:(id)a0;
- (void)removeSourceOfClass:(Class)a0 fromGroups:(id)a1;
- (void)_configureButtonsForSaving;
- (void)_configureButtonsForTakingPhotoFullScreen:(char)a0;
- (void)_configureButtonsSelectingImageForSourceType:(long long)a0;
- (id)_mediaLibraryWithOptions:(id)a0;
- (void)_resetMediaLibrary;
- (struct CGImage { } *)_staticRepresentation;
- (void)_updateVisibleRootGroups;
- (void)addSourceOfClass:(Class)a0 toGroups:(id)a1;
- (id /* block */)blockForTakingPhotoWithDisplayMode:(long long)a0;
- (long long)browserStateForSelectedSource;
- (void)configureInitialDisplayForLikeness:(id)a0 isMe:(char)a1;
- (id)emptyContentStringForSelectedSource;
- (void)imageBrowser:(id)a0 cellWasDoubleClickedAtIndex:(unsigned long long)a1;
- (void)imageRepresentationOfItemChanged:(id)a0;
- (id)initWithUserSetup:(char)a0;
- (void)loadRootGroups;
- (id /* block */)nextActionBlockForSourceType:(long long)a0;
- (void)setNextButtonEnabled:(char)a0;
- (void)setZoomFraction:(double)a0;
- (void)sourceTypeWasSelected:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })squareCropRectWithUpperLeftOrigin;
- (void)updateDefaultPhotos;
- (void)updateRootGroup:(id)a0 forMediaSourceIdentifier:(id)a1;

@end
