@class CNContact, NSString, CNTabSegmentedControl;

@interface CNContactTabSwitcherViewController : NSViewController <CNContactCardWidget>

@property (retain, nonatomic) CNTabSegmentedControl *segmentedControl;
@property (nonatomic) BOOL inEditMode;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double cachedHeight;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) unsigned long long tabState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (double)desiredHeight;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (double)customSpacingAfterWidget;
- (void)didSelectSegment:(id)a0;
- (void)_contactTabSwitcher_CommonInit;
- (void)updateStrings;
- (void)createViewHierarchy;
- (unsigned long long)stateForSegment:(unsigned long long)a0;
- (unsigned long long)segmentForState:(unsigned long long)a0;
- (void)setEditMode:(BOOL)a0;

@end
