@class AMPDevice, NSString, NSView, DeviceCollection, NSArray, NSToolbarItem;

@interface AMPDeviceRemoteController : AMPViewController <AMPFilterableViewModel>

@property (retain, nonatomic) DeviceCollection *deviceCollection;
@property (retain, nonatomic) AMPDevice *device;
@property (retain, nonatomic) NSView *deviceView;
@property (retain, nonatomic) NSString *viewMode;
@property (readonly, nonatomic) BOOL filteringIsEnabled;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *filterString;
@property (readonly, nonatomic) NSString *filterStatusString;
@property (readonly, nonatomic) BOOL showFilterBarBackground;
@property (readonly, nonatomic) NSView *secondaryControlView;
@property (readonly, nonatomic) NSArray *additionalToolbarItems;
@property (readonly, nonatomic) BOOL goBackButtonEnabled;
@property (readonly, nonatomic) NSArray *supportedFilterCategories;
@property (nonatomic) unsigned long long currentFilterCategories;
@property (readonly, copy, nonatomic) id /* block */ showAllViewOptionsBlock;
@property (readonly, nonatomic) NSToolbarItem *centerDisplayItem;
@property (readonly, nonatomic) NSString *filterPlaceholder;
@property (readonly, nonatomic) BOOL showFilterBarTitle;
@property (readonly, nonatomic) BOOL onlyShowFilterBarTitleWithSubtitle;
@property (readonly, nonatomic) NSString *temporaryConditionDescription;
@property (readonly, nonatomic) NSString *temporaryResolutionButtonTitle;
@property (readonly, nonatomic) BOOL showDownloadedSongsMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewForDevice:(id)a0 inCollection:(id)a1 viewMode:(id)a2;

- (void)viewWillDisappear;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (BOOL)editBarUndoEnabled;

@end
