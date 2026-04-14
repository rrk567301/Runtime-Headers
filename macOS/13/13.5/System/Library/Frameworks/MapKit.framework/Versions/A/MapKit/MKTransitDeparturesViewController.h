@class NSString, MKMapItem, MKTransitDeparturesDataSource;
@protocol MKTransitDepaturesViewControllerDelegate;

@interface MKTransitDeparturesViewController : _MKClickableTableViewController <MKTransitDeparturesDataSourceHosting, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    BOOL _allowTransitLineSelection;
    BOOL _showNewUI;
}

@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) MKTransitDeparturesDataSource *dataSource;
@property (readonly, nonatomic) BOOL isInSiri;
@property (weak, nonatomic) id<MKTransitDepaturesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)_trailingSeparatorInsetForNewUI;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)_newStationCardUIEnabled;
- (int)currentTransitCategory;
- (double)defaultLeadingSeparatorInset;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithMapItem:(id)a0 allowTransitLineSelection:(BOOL)a1;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (id)separatorColorForTransitDeparturesDataSource:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetsForTransitDeparturesDataSource:(id)a0;
- (id)traitsForTransitDeparturesDataSource:(id)a0;
- (BOOL)transitDeparturesDataSource:(id)a0 canSelectDepartureSequence:(id)a1 transitStationMapItem:(id)a2 transitLine:(id)a3 fromCell:(id)a4;
- (void)transitDeparturesDataSource:(id)a0 didSelectAttribution:(id)a1;
- (void)transitDeparturesDataSource:(id)a0 didSelectAttributionController:(id)a1;
- (void)transitDeparturesDataSource:(id)a0 didSelectConnectionInformation:(id)a1;
- (void)transitDeparturesDataSource:(id)a0 didSelectDepartureSequence:(id)a1 transitStationMapItem:(id)a2 transitLine:(id)a3 fromCell:(id)a4;
- (void)transitDeparturesDataSource:(id)a0 didSelectTransitLine:(id)a1 fromCell:(id)a2;
- (void)transitDeparturesDataSource:(id)a0 didUpdateHeightsForRows:(id)a1;
- (void)transitDeparturesDataSource:(id)a0 showIncidents:(id)a1;
- (void)transitDeparturesDataSourceDidReload:(id)a0;
- (void)transitDeparturesDataSourceDidToggleHiddenSystem:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
