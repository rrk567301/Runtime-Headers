@class PRSTableView, NSArray, NSString;

@interface PRSAssistantPreviewController : PRSPreviewController <PRSPreviewControllerDelegate, PRSSliceViewControllerDelegate, PRSTableRowDelegate, PRSTableViewDelegate, NSTableViewDelegate, NSTableViewDataSource>

@property double extraSpace;
@property (weak) PRSTableView *sliceTable;
@property (retain) NSArray *slices;
@property (readonly, nonatomic) BOOL containsHidableRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newPreviewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)resultDidUpdate:(id)a0;
- (void)clickedInTableView:(id)a0 slice:(id)a1 event:(id)a2;
- (void)setupForResult:(id)a0;
- (void)_addSliceForTextString:(id)a0 font:(id)a1 color:(id)a2 alignment:(long long)a3 gapAbove:(double)a4 toSliceArray:(id)a5;
- (void)_addSliceForTextString:(id)a0 font:(id)a1 color:(id)a2 toSliceArray:(id)a3;
- (void)_addSlicesForAppLinkCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForCardSections:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForCardSections:(id)a0 toSliceArray:(id)a1 unHideRows:(BOOL)a2;
- (void)_addSlicesForDescriptionCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForDescriptionCardSection:(id)a0 toSliceArray:(id)a1 isGeneric:(BOOL)a2;
- (void)_addSlicesForGenericResult:(id)a0 toSliceArray:(id)a1 unHideRows:(BOOL)a2;
- (void)_addSlicesForHTMLSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForLinkTableCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForMovieListCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForMovies:(id)a0 toSliceArray:(id)a1 forSection:(id)a2;
- (void)_addSlicesForRichTitleCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForRowCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForSimpleResult:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForSportsDataCardWithImageCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForSportsSummaryScoreCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForStockChartCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForTVRowCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForTableRowCardSection:(id)a0 toSliceArray:(id)a1 hideSlices:(BOOL)a2;
- (void)_addSlicesForTitleCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForTrackListCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForTrailersCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_addSlicesForWebCardSection:(id)a0 toSliceArray:(id)a1;
- (void)_makeAdjustmentsToLastSliceInArray:(id)a0;
- (void)_setDelegateForSliceControllers:(id)a0;
- (void)_setupEmbeddedTables:(id)a0;
- (void)clickedInTableView:(id)a0;
- (id)currentInputAndTimeStamp:(long long *)a0;
- (id)getTableView;
- (unsigned long long)normalizeImageAlignment:(unsigned long long)a0;
- (BOOL)performAccessbilityPressWithRowView:(id)a0;
- (void)previewController:(id)a0 didEngage:(id)a1;
- (void)replaceSlice:(id)a0 withSlice:(id)a1;
- (void)setRepresentedObject:(id)a0 unHideResults:(BOOL)a1;
- (void)setupForResult:(id)a0 unHideRows:(BOOL)a1;
- (void)sliceViewController:(id)a0 didOpenPunchout:(id)a1;
- (void)tableDidMoveToSuperView;
- (void)updateAccessibleChildren;
- (void)updateSliceTable;
- (void)updateSlices:(id)a0;
- (void)viewClosed:(id)a0;

@end
