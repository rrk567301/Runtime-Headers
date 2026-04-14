@class NSTextFieldCell, NSLayoutConstraint, NSArray, NSScrollView, NSString, NSDictionary, NSMutableArray, NSTableColumn, NSObject, NSButton, NSTableView;
@protocol SSConnectionAccessibilityViewControllerDelegate;

@interface SSConnectionAccessibilityViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>

@property (retain, nonatomic) NSArray *allFeatureDicts;
@property (retain, nonatomic) NSDictionary *featureNameToFeatureDict;
@property (retain, nonatomic) NSMutableArray *rows;
@property (retain, nonatomic) NSObject<SSConnectionAccessibilityViewControllerDelegate> *delegate;
@property (nonatomic) BOOL showingAll;
@property NSScrollView *tableScrollView;
@property NSTableView *tableView;
@property NSTableColumn *featureColumn;
@property NSTableColumn *switchColumn;
@property NSTextFieldCell *privacyInfoLabel;
@property NSButton *showAllButton;
@property NSLayoutConstraint *tableHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidAppear;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (struct CGSize { double x0; double x1; })getDesiredSize;
- (id)initWithViewerEnabledFeatures:(id)a0 serverEnabledFeatures:(id)a1 delegate:(id)a2;
- (void)onClose:(id)a0;
- (void)onEnable:(id)a0;
- (void)onToggleShowAll:(id)a0;
- (void)onToggleTableSwitch:(id)a0;
- (void)showSheetOnParentWindow:(id)a0;
- (void)updateDataModelAndViews;

@end
