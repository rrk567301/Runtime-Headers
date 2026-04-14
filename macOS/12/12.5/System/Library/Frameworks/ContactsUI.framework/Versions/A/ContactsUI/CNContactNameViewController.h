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
+ (id)whitespaceText;
+ (id)lockGlyphAttachmentText;
+ (id)downtimeLabelAttributedText;

- (void).cxx_destruct;
- (void)reloadData;
- (BOOL)commitEditing;
- (void)loadView;
- (BOOL)isSelectable;
- (id)makeTouchBar;
- (void)mouseUp:(id)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)selectFirstKeyView;
- (void)addField:(id)a0;
- (BOOL)canAddContactOrGroup;
- (BOOL)canAddField;
- (void)addContact;
- (void)addGroup;
- (double)desiredHeight;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (id)updateKeyViewLoopAndReturnTailView;
- (BOOL)editMode;
- (BOOL)isPrivateMeEnabled;
- (void)editExistingKey:(id)a0 identifier:(id)a1 yOffset:(double)a2;
- (void)setPropertyKeysToDisplay:(id)a0;
- (void)highlightSearchTerms:(id)a0;
- (void)updateNameViewConstraints;
- (void)clearConstraints;
- (void)generateConstraints;
- (void)updatDowntimeLabelOffsetConstraint;
- (void)updateShareTextFieldVisibility;
- (void)reloadDataForKey:(id)a0;
- (void)focusKey:(id)a0;
- (id)colorForProperty:(id)a0;
- (BOOL)templateMode;
- (void)nameView:(id)a0 willLoseFocusInDirection:(unsigned long long)a1;

@end
