@class NSString, NSArray, ABAddressBook, CNContact, CNContactPickerCardViewStyleProvider, CNContactStore, AKCardViewDataSource, ABCollectionViewItemFactory, CNContactListCellView;
@protocol CNContactListCellViewControllerDelegate;

@interface CNContactListCellViewController : NSObject <ABCardCollectionViewDataSource, ABCardCollectionViewDelegate> {
    ABCollectionViewItemFactory *_itemFactory;
    AKCardViewDataSource *_dataSource;
    AKCardViewDataSource *_suggestionDataSource;
    CNContactStore *_contactStore;
    ABAddressBook *_addressBook;
    ABAddressBook *_suggestionAddressBook;
    CNContactPickerCardViewStyleProvider *_styleProvider;
    NSString *_contactIdentifier;
    NSString *_linkIdentifier;
}

@property (weak) CNContactListCellView *cellView;
@property (weak) id<CNContactListCellViewControllerDelegate> delegate;
@property (nonatomic, getter=isExpanded) char expanded;
@property (nonatomic) char canExpandCell;
@property (copy) NSArray *displayedKeys;
@property char allowsNamePicking;
@property (readonly) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keysToFetch;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)dataSource;
- (char)isEditable;
- (char)isEditing;
- (char)isSelectable;
- (char)isTemplate;
- (void)setEntry:(id)a0;
- (id)superview;
- (char)isMe;
- (void)setAddressBook:(id)a0;
- (char)isUnified;
- (void)setContactStore:(id)a0;
- (id)collectionItems;
- (void)itemWasClicked:(id)a0;
- (void)buildActionGlyphsForItem:(id)a0;
- (void)buildVisibleViewForItem:(id)a0;
- (void)cardViewNoteDidChange;
- (id)colorForProperty:(id)a0 identifier:(id)a1;
- (void)editExistingKey:(id)a0 identifier:(id)a1 yOffset:(double)a2;
- (char)editMode;
- (id)fetchContact;
- (char)hasDisplayedKeys;
- (char)hasValuesForDisplayedKeys;
- (char)importMode;
- (char)isPrivateMeEnabled;
- (id)makeDataSource;
- (void)refreshCollectionView;
- (id)scopeForItem:(id)a0;
- (char)shouldEnableCell;
- (char)suggestedCardMode;

@end
