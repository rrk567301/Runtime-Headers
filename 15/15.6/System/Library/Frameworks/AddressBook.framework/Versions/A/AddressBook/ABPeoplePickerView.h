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
@property (nonatomic) char allowsGroupSelection;
@property (nonatomic) char allowsMultipleSelection;
@property (retain, nonatomic) NSString *displayedProperty;
@property (retain, nonatomic) NSString *autosaveName;
@property (readonly) NSArray *selectedGroups;
@property (readonly) NSArray *selectedRecords;
@property (nonatomic) id target;
@property (nonatomic) SEL groupDoubleAction;
@property (nonatomic) SEL nameDoubleAction;

+ (id)titleOfColumn:(id)a0;
+ (Class)_controllerClass;
+ (char)isPropertyOfColumnLocalizable:(id)a0;
+ (char)isTitleOfColumnAlreadyLocalized:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)_searchField;
- (id)controller;
- (void)deselectAll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)properties;
- (void)removeProperty:(id)a0;
- (void)addProperty:(id)a0;
- (void)_setValueColumnWidthPercentage:(double)a0;
- (void)deselectRecord:(id)a0;
- (void)_loadPickerUI;
- (void)_openSelectionInAddressBook:(char)a0;
- (void)_placeAccessoryView;
- (void)_postSearchUpdateNotifications;
- (id)_uiController;
- (double)_valueColumnWidthPercentage;
- (void)addFilter:(id)a0 title:(id)a1 identifier:(id)a2;
- (char)allowsDirectoriesSearches;
- (char)allowsGroupEditing;
- (void)clearSearchField:(id)a0;
- (id)columnTitleForProperty:(id)a0;
- (void)decodeColumns:(id)a0;
- (void)deselectGroup:(id)a0;
- (void)deselectIdentifier:(id)a0 forPerson:(id)a1;
- (void)editInAddressBook:(id)a0;
- (char)hasTableBorder;
- (char)inDistributionListEditor;
- (char)isDistributionListEditor;
- (void)printDescription:(id)a0;
- (void)removeAllProperties;
- (void)selectGroup:(id)a0 byExtendingSelection:(char)a1;
- (void)selectIdentifier:(id)a0 forPerson:(id)a1 byExtendingSelection:(char)a2;
- (void)selectInAddressBook:(id)a0;
- (void)selectRecord:(id)a0 byExtendingSelection:(char)a1;
- (id)selectedIdentifiersForPerson:(id)a0;
- (id)selectedValues;
- (void)setAllowsDirectoriesSearches:(char)a0;
- (void)setAllowsGroupEditing:(char)a0;
- (void)setColumnTitle:(id)a0 forProperty:(id)a1;
- (void)setHasTableBorder:(char)a0;
- (void)setInDistributionListEditor:(char)a0;
- (void)setIsDistributionListEditor:(char)a0;
- (void)setShowIdentityBadges:(char)a0;
- (void)setShowIdentityGroups:(char)a0;
- (void)setTypes:(id)a0 forProperty:(id)a1;

@end
