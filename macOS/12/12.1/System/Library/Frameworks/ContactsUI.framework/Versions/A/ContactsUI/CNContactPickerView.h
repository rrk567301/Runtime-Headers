@class NSView, NSScrollView, CNGroupListBackgroundView, NSArray, NSMutableDictionary, NSStackView, CNContactPickerBorderView, CNContactPickerViewLayout, CNContactListView, CNGroupListView, ABBookSearchField;

@interface CNContactPickerView : NSView

@property (retain) NSScrollView *contactListScrollView;
@property (retain) NSView *groupListScrollView;
@property (retain) CNGroupListBackgroundView *groupListBackgroundView;
@property (retain) CNContactPickerBorderView *horizontalBorderView;
@property (retain) CNContactPickerBorderView *verticalBorderView;
@property (retain) CNContactPickerBorderView *contactCardBorderView;
@property (retain) NSStackView *stackView;
@property (retain) NSView *searchFieldRowView;
@property (retain) NSView *mainRowView;
@property (retain) CNContactPickerViewLayout *pickerLayout;
@property (retain) NSMutableDictionary *sections;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSView *rightTopBarView;
@property (retain) NSArray *customConstraints;
@property (weak, nonatomic) CNContactListView *contactListView;
@property (weak, nonatomic) CNGroupListView *groupListView;
@property (retain, nonatomic) ABBookSearchField *searchField;
@property (retain, nonatomic) NSView *contactCardView;
@property (nonatomic, getter=isGroupListVisible) BOOL groupListVisible;
@property (nonatomic, getter=isSearchFieldVisible) BOOL searchFieldVisible;
@property (nonatomic, getter=isContactCardVisible) BOOL contactCardVisible;

- (void).cxx_destruct;
- (id)views;
- (void)awakeFromNib;
- (void)updateConstraints;
- (BOOL)canSmoothFontsInLayer;
- (void)addSection:(id)a0;
- (void)updateAppearance;
- (void)updateLayout;
- (void)setupResponderChain;
- (void)showSectionWithIdentifier:(id)a0;
- (void)updateViewHierarchy;
- (id)sectionWithIdentifier:(id)a0;

@end
