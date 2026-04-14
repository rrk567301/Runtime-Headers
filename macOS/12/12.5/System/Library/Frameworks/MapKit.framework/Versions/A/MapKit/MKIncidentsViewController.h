@class NSArray, NSString, GEOComposedRouteAdvisory;

@interface MKIncidentsViewController : _MKTableViewController {
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *transitIncidents;
@property (copy, nonatomic) NSArray *restrictionIncidents;
@property (copy, nonatomic) NSArray *advisoryCards;
@property (readonly, nonatomic) NSString *incidentsTitle;
@property (copy, nonatomic) GEOComposedRouteAdvisory *advisory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)selectionShouldChangeInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)viewDidLoad;
- (void)_updateTitle;
- (void)viewWillAppear:(BOOL)a0;
- (void)infoCardThemeChanged;
- (BOOL)_canShowWhileLocked;
- (void)reloadDataSource;
- (void)_localeDidChange;
- (void)_compileSections;
- (long long)_transitIncidentIndexForRow:(long long)a0 section:(long long)a1;
- (id)_transitCellForIndex:(long long)a0 inSection:(long long)a1;
- (id)extendedDetailCell;
- (id)detailCellInSection:(long long)a0;
- (unsigned long long)_transitIncidentsCount;
- (id)_cellForRow:(long long)a0 inSection:(long long)a1;
- (id)initWithTransitIncidents:(id)a0;
- (id)initWithRestrictionIncidents:(id)a0;
- (struct CGSize { double x0; double x1; })viewIntrinsicContentSize;
- (id)_restrictionCellForIndex:(long long)a0;
- (id)_noticeCellForIndex:(long long)a0;
- (id)_advisoryItemCellForIndex:(long long)a0;
- (unsigned long long)_incidentsCount;
- (long long)_sectionForSectionIndex:(long long)a0;

@end
