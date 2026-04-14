@class ABCardViewStyleProvider, CNContact, AKCardViewDataSource, NSString, CNUIEditingRules, ABCardCollectionViewController, ABCardCollectionView;
@protocol CNContactDetailsViewControllerDelegate;

@interface CNContactDetailsViewController : NSViewController <ABCardCollectionViewControllerDelegate, CNContactCardWidget>

@property (retain, nonatomic) CNUIEditingRules *editingRules;
@property (retain, nonatomic) ABCardCollectionView *cardCollectionView;
@property (retain, nonatomic) ABCardCollectionViewController *cardCollectionViewController;
@property (retain, nonatomic) CNContact *contact;
@property (weak, nonatomic) id<CNContactDetailsViewControllerDelegate> controllerDelegate;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL isUnified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)delegate;
- (void).cxx_destruct;
- (void)reloadData;
- (BOOL)commitEditing;
- (BOOL)isEditing;
- (void)loadView;
- (BOOL)isEditable;
- (BOOL)isSelectable;
- (void)viewDidLoad;
- (BOOL)isTemplate;
- (id)userActionListDataSource;
- (double)desiredHeight;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (id)updateKeyViewLoopAndReturnTailView;
- (BOOL)editMode;
- (BOOL)importMode;
- (BOOL)suggestedCardMode;
- (BOOL)isPrivateMeEnabled;
- (void)notifyDelegateActionWasPerformed;
- (void)editExistingKey:(id)a0 identifier:(id)a1 yOffset:(double)a2;
- (id)colorForProperty:(id)a0 identifier:(id)a1;
- (void)cardViewNoteDidChange;
- (void)setPropertyKeysToDisplay:(id)a0;
- (void)cardCollectionViewControllerKeyViewLoopNeedsUpdate:(id)a0;
- (void)createConstrains;
- (void)focusCollectionItemWithKey:(id)a0 identifier:(id)a1 yOffset:(double)a2 completion:(id /* block */)a3;
- (void)highlightSearchTerms:(id)a0;
- (void)editCollectionItemWithKey:(id)a0 label:(id)a1;
- (void)applyDisplayAttributes;
- (void)updateFaceTimeAvailability:(BOOL)a0;
- (void)addTemplateItemForKey:(id)a0;
- (void)showFirstItem;
- (void)showLastItem;

@end
