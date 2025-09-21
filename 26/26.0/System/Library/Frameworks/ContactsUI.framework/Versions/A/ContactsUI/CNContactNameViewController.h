@class NSTextField, ABCardViewStyleProvider, NSArray, NSString, CNAddFieldTouchBar, CNContact, ABNameView, AKCardViewDataSource, NSLayoutConstraint;
@protocol CNContactNameViewControllerDelegate;

@interface CNContactNameViewController : NSViewController <ABNameViewDelegate, CNAddFieldTouchBarDelegate, CNContactCardWidget>

@property (retain, nonatomic) ABNameView *nameView;
@property (retain, nonatomic) NSArray *nameViewConstraints;
@property (retain, nonatomic) NSLayoutConstraint *downtimeLabelOffsetConstraint;
@property (retain, nonatomic) NSTextField *shareTextField;
@property (retain, nonatomic) NSTextField *downtimeTextField;
@property (retain, nonatomic) CNAddFieldTouchBar *addFieldTouchBar;
@property (retain, nonatomic) CNContact *contact;
@property (weak, nonatomic) id<CNContactNameViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (nonatomic) BOOL shouldDisableShowingShareLabel;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downtimeContactText;
+ (id)downtimeLabelAttributedText;
+ (id)lockGlyphAttachmentText;
+ (id)whitespaceText;

- (void)reloadData;
- (void)updateViewConstraints;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)addField:(id)a0;
- (void).cxx_destruct;
- (BOOL)commitEditing;
- (BOOL)editMode;
- (BOOL)isSelectable;
- (id)makeTouchBar;
- (void)selectFirstKeyView;
- (void)addContact;
- (void)addGroup;
- (BOOL)canAddContactOrGroup;
- (BOOL)canAddField;
- (void)clearConstraints;
- (id)colorForProperty:(id)a0;
- (double)desiredHeight;
- (void)editExistingKey:(id)a0 identifier:(id)a1 yOffset:(double)a2;
- (void)focusKey:(id)a0;
- (void)generateConstraints;
- (void)highlightSearchTerms:(id)a0;
- (BOOL)isPrivateMeEnabled;
- (void)nameView:(id)a0 willLoseFocusInDirection:(unsigned long long)a1;
- (void)reloadDataForKey:(id)a0;
- (void)setPropertyKeysToDisplay:(id)a0;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (BOOL)templateMode;
- (void)updatDowntimeLabelOffsetConstraint;
- (id)updateKeyViewLoopAndReturnTailView;
- (void)updateNameViewConstraints;
- (void)updateShareTextFieldVisibility;

@end
