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
@property (nonatomic) char shouldDisableShowingShareLabel;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downtimeContactText;
+ (id)downtimeLabelAttributedText;
+ (id)lockGlyphAttachmentText;
+ (id)whitespaceText;

- (void).cxx_destruct;
- (char)commitEditing;
- (char)isSelectable;
- (void)loadView;
- (id)makeTouchBar;
- (void)mouseUp:(id)a0;
- (void)reloadData;
- (void)selectFirstKeyView;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)addField:(id)a0;
- (void)addContact;
- (void)addGroup;
- (char)canAddContactOrGroup;
- (char)canAddField;
- (void)clearConstraints;
- (id)colorForProperty:(id)a0;
- (double)desiredHeight;
- (void)editExistingKey:(id)a0 identifier:(id)a1 yOffset:(double)a2;
- (char)editMode;
- (void)focusKey:(id)a0;
- (void)generateConstraints;
- (void)highlightSearchTerms:(id)a0;
- (char)isPrivateMeEnabled;
- (void)nameView:(id)a0 willLoseFocusInDirection:(unsigned long long)a1;
- (void)reloadDataForKey:(id)a0;
- (void)setPropertyKeysToDisplay:(id)a0;
- (char)shouldBeIncludedInKeyViewLoop;
- (char)templateMode;
- (void)updatDowntimeLabelOffsetConstraint;
- (id)updateKeyViewLoopAndReturnTailView;
- (void)updateNameViewConstraints;
- (void)updateShareTextFieldVisibility;

@end
