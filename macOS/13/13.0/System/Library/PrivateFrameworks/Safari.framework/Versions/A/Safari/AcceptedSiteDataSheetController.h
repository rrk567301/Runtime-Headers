@class NSTextField, NSString, NSArray, NSSearchField, NSTimer, AcceptedSiteDataDescriptionProvider, WBSFaviconRequestsController, NSMutableSet, NSButton;

@interface AcceptedSiteDataSheetController : SheetWithTableController <NSTableViewDataSource, NSTableViewDelegate, TrackingDataControllerClient> {
    NSSearchField *searchField;
    NSButton *doneButton;
    NSArray *_websiteTrackingData;
    NSArray *_unfilteredWebsiteTrackingData;
    WBSFaviconRequestsController *_requestController;
    NSMutableSet *_selectedDisplayNames;
    struct unique_ptr<Safari::TrackingDataControllerClientObjCAdapter, std::default_delete<Safari::TrackingDataControllerClientObjCAdapter>> { struct __compressed_pair<Safari::TrackingDataControllerClientObjCAdapter *, std::default_delete<Safari::TrackingDataControllerClientObjCAdapter>> { struct TrackingDataControllerClientObjCAdapter *__value_; } __ptr_; } _clientObjCAdapter;
    NSTimer *_updateWebsiteTrackingDataCoalescingTimer;
    NSArray *_latestWebsiteTrackingData;
    AcceptedSiteDataDescriptionProvider *_acceptedSiteDataDescriptionProvider;
}

@property (weak, nonatomic) NSTextField *emptyTablePlaceholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)awakeFromNib;
- (void)windowDidChangeOcclusionState:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)hideSheet:(id)a0;
- (void)showSheetInWindow:(id)a0;
- (void)reloadTableData;
- (void)removeAllItems:(id)a0;
- (void)_updateTrackingDataCoalescingTimerFired;
- (void)didUpdateTrackingData:(id)a0;
- (void)_beginWatchingTrackingData;
- (void)_stopWatchingTrackingData;
- (id)filterStringFromSearchField;
- (void)reloadDataAndRestoreSelectedSites;
- (void)filterTrackingData:(id)a0;
- (void)_updatePlaceholderTextValueAndVisibility;
- (void)_reloadDataAndRestoreSelection;
- (void)search:(id)a0;
- (void)removeSelectedItems:(id)a0;
- (BOOL)_confirmRemoveAllItems;
- (BOOL)validate_focusContentSearchField:(id)a0;
- (void)focusContentSearchField:(id)a0;
- (void)_cancelUpdateTrackingDataCoalescingTimer;

@end
