@class NSArray, NSString, GEOComposedRouteAdvisory;

@interface MKIncidentsViewController : _MKTableViewController {
    NSArray *_sections;
}

@property (copy, nonatomic) NSArray *transitIncidents;
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
- (void)_localeDidChange;
- (id)initWithTransitIncidents:(id)a0;
- (void)reloadDataSource;
- (struct CGSize { double x0; double x1; })viewIntrinsicContentSize;
- (id)_cellForRow:(long long)a0 inSection:(long long)a1;
- (id)_transitCellForIndex:(long long)a0 inSection:(long long)a1;
- (id)_advisoryItemCellForIndex:(long long)a0;
- (unsigned long long)_incidentsCount;
- (unsigned long long)_transitIncidentsCount;
- (long long)_transitIncidentIndexForRow:(long long)a0 section:(long long)a1;
- (void)_compileSections;
- (long long)_sectionForSectionIndex:(long long)a0;
- (id)detailCellInSection:(long long)a0;
- (id)extendedDetailCell;

@end
