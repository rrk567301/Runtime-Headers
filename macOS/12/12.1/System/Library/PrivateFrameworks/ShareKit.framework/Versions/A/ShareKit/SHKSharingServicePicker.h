@class NSUUID, SHKSharingServicePickerMenuLatencyMetric, NSArray, NSString, SHKSharingService, NSOperationQueue, NSDictionary, NSMenu, NSMutableArray, NSObject, NSSharingServicePicker;
@protocol OS_dispatch_source, SHKMenuControllerDelegate;

@interface SHKSharingServicePicker : NSObject <NSPopoverDelegate, NSMenuDelegate> {
    NSArray *_items;
    BOOL _itemsReady;
    NSMenu *_menu;
    NSMutableArray *_sharingServices;
    NSObject<OS_dispatch_source> *_fetchingKeepTimer;
    BOOL _menuAvailable;
}

@property (class, readonly) unsigned long long useCount;

@property (nonatomic) long long completedProviderCount;
@property (retain) NSUUID *currentMenuItemsQueryID;
@property BOOL hasActionServices;
@property (retain) NSArray *menuItems;
@property BOOL menuItemsComplete;
@property BOOL usesMetricsAppearance;
@property long long menuIndentationLevel;
@property (retain) SHKSharingServicePickerMenuLatencyMetric *menuLatencyMetric;
@property (retain) SHKSharingService *selectedSharingService;
@property (retain, nonatomic) NSArray *serviceItemProviderOperations;
@property (retain, nonatomic) NSOperationQueue *serviceItemProviderOperationQueue;
@property (nonatomic) long long totalProviderCount;
@property (weak) NSSharingServicePicker *nsSharingServicePicker;
@property (weak) id<SHKMenuControllerDelegate> delegate;
@property (retain) NSArray *items;
@property (copy) NSArray *applicationServices;
@property (copy) NSArray *excludedSharingServiceNames;
@property (retain) NSDictionary *info;
@property long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)incrementUseCount;

- (void).cxx_destruct;
- (id)menu;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)worksWhenModal;
- (id)initWithItems:(id)a0;
- (id)_serviceFromRepresentedObject:(id)a0;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (id)_titleAttributes;
- (id)emptyMenuImage;
- (id)menuItemFromService:(id)a0;
- (id)_alternateItemIdentifierFromRepresentedObject:(id)a0;
- (void)menuWithCompletion:(id /* block */)a0;
- (void)_handleItemsReady;
- (id)_resolveItemSource:(id)a0 forSharingServiceName:(id)a1;
- (id)_itemsForSharingService:(id)a0;
- (id)_subjectForSharingService:(id)a0;
- (void)cleanUpMenu;
- (void)_performSharingService:(id)a0;
- (void)_shareServiceSelected:(id)a0;
- (id)_representedObjectForService:(id)a0 alternateItemIdentifier:(id)a1 touchBarImage:(id)a2;
- (id)_subtitleAttributes;
- (id)menuItemFromService:(id)a0 includeImage:(BOOL)a1;
- (void)openAppExtensionsPrefpane;
- (id)moreButtonImage;
- (id)moreButtonTouchBarImage;
- (id)tintedImageWithSize:(struct CGSize { double x0; double x1; })a0 fraction:(double)a1 fromImage:(id)a2;
- (void)addGroupedRecentServices:(id)a0 withTitle:(id)a1 toMenuItems:(id)a2 menuItemServices:(id)a3;
- (id)applicationServicesWithType:(long long)a0;
- (id)moreMenuItem;
- (void)addRecentServices:(id)a0 toMenuItems:(id)a1 menuItemServices:(id)a2;
- (void)ensureNSSharingServicePickerIsSet;
- (id)_placeholderItems;
- (id)pickerServicesForServices:(id)a0 withMask:(unsigned long long)a1 enforceOnMainQueue:(BOOL)a2;
- (id)pickerMenuItemsForShareExtensions:(id)a0 actionExtensions:(id)a1 menuItemServices:(id *)a2 enforceOnMainQueue:(BOOL)a3;
- (id)orderAndGroupActionServices:(id)a0;
- (id)sharingMenuItemsForShareServices:(id)a0 menuItemsServices:(id *)a1 enforceOnMainQueue:(BOOL)a2;
- (id)newPickerMenu;
- (id)collapsedSharingMenuItemWithSubmenu:(id)a0;
- (void)notifyDidChooseSharingService:(id)a0;
- (void)setupMenuLatencyMeasurement;
- (void)queryPickerMenuItemsAndServicesWithCompletion:(id /* block */)a0;
- (void)_populateNSMenu;
- (BOOL)_queueBackgroundOperations;
- (id)fetchingMenuItem;
- (void)handleMenuItemsAvailable;
- (void)ensureFetchingKeepTimerStopped;
- (void)handleFetchingKeepTimerFired;
- (void)handlePickerQueryWithID:(id)a0 completedWithMenuItems:(id)a1 sharingServices:(id)a2;
- (void)startFetchingKeepTimer;
- (struct CGPoint { double x0; double x1; })menuLocationForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1 preferredEdge:(unsigned long long)a2;
- (id)_delimiterAttributes;

@end
