@class NSView, NSString, NSArray;

@interface ABPeoplePickerView : NSView {
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
    SEL _reserved6;
    SEL _reserved7;
    id _reserved8;
    id _reserved9;
    id _reserved10;
}

@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) int valueSelectionBehavior;
@property (nonatomic) BOOL allowsGroupSelection;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (retain, nonatomic) NSString *displayedProperty;
@property (retain, nonatomic) NSString *autosaveName;
@property (readonly) NSArray *selectedGroups;
@property (readonly) NSArray *selectedRecords;
@property (nonatomic) id target;
@property (nonatomic) SEL groupDoubleAction;
@property (nonatomic) SEL nameDoubleAction;

+ (id)titleOfColumn:(id)a0;
+ (Class)_controllerClass;
+ (BOOL)isTitleOfColumnAlreadyLocalized:(id)a0;
+ (BOOL)isPropertyOfColumnLocalizable:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)controller;
- (void)_commonInit;
- (id)_searchField;
- (void)deselectAll:(id)a0;
- (id)properties;
- (void)removeProperty:(id)a0;
- (void)addProperty:(id)a0;
- (void)setInDistributionListEditor:(BOOL)a0;
- (void)setHasTableBorder:(BOOL)a0;
- (void)selectGroup:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)selectIdentifier:(id)a0 forPerson:(id)a1 byExtendingSelection:(BOOL)a2;
- (void)printDescription:(id)a0;
- (void)setColumnTitle:(id)a0 forProperty:(id)a1;
- (id)columnTitleForProperty:(id)a0;
- (id)selectedIdentifiersForPerson:(id)a0;
- (id)selectedValues;
- (void)selectRecord:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)deselectGroup:(id)a0;
- (void)deselectRecord:(id)a0;
- (void)deselectIdentifier:(id)a0 forPerson:(id)a1;
- (void)clearSearchField:(id)a0;
- (void)editInAddressBook:(id)a0;
- (void)selectInAddressBook:(id)a0;
- (void)setTypes:(id)a0 forProperty:(id)a1;
- (BOOL)hasTableBorder;
- (void)addFilter:(id)a0 title:(id)a1 identifier:(id)a2;
- (BOOL)inDistributionListEditor;
- (void)_openSelectionInAddressBook:(BOOL)a0;
- (void)setAllowsDirectoriesSearches:(BOOL)a0;
- (BOOL)allowsDirectoriesSearches;
- (BOOL)allowsGroupEditing;
- (BOOL)isDistributionListEditor;
- (double)_valueColumnWidthPercentage;
- (void)setAllowsGroupEditing:(BOOL)a0;
- (void)setShowIdentityBadges:(BOOL)a0;
- (void)setShowIdentityGroups:(BOOL)a0;
- (void)setIsDistributionListEditor:(BOOL)a0;
- (void)_placeAccessoryView;
- (void)_loadPickerUI;
- (void)removeAllProperties;
- (void)decodeColumns:(id)a0;
- (void)_setValueColumnWidthPercentage:(double)a0;
- (void)_postSearchUpdateNotifications;
- (id)_uiController;

@end
