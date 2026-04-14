@interface IFDCustomizationItem : NSObject {
    struct IFDCustomizationItem_Private { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; } *_private;
}

- (void)setVisible:(BOOL)a0;
- (struct __CFBundle { } *)bundle;
- (BOOL)requiresAuthorization;
- (id)action;
- (void)setAction:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)identifier;
- (void)setSelectionState:(int)a0;
- (BOOL)enabled;
- (id)description;
- (BOOL)visible;
- (id)attributes;
- (void)setEnabled:(BOOL)a0;
- (id)descriptionString;
- (id)propertyDictionary;
- (id)title;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTitle:(id)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (int)selectionState;
- (int)itemState;
- (id)parentItem;
- (void)setItemState:(int)a0;
- (id)attributeForKey:(id)a0;
- (void)setParentItem:(id)a0;
- (void)setPackages:(id)a0;
- (id)tooltip;
- (void)setTooltip:(id)a0;
- (id)subItems;
- (void)setCustomLocation:(id)a0;
- (id)customLocation;
- (void)setShowSize:(BOOL)a0;
- (BOOL)showSize;
- (id)filePathsForItem;
- (id)activePackages;
- (void)addPackages:(id)a0;
- (void)addSubItem:(id)a0;
- (id)allPackages;
- (BOOL)autoExpand;
- (id)deepCopyWithNewParent:(id)a0 andWithChoiceList:(id)a1;
- (id)dependentItems;
- (id)descriptionMIMEType;
- (id)functionNameForScript:(id)a0;
- (int)lastTriedState;
- (BOOL)locationCustomizable;
- (void)removeAllSubItems;
- (BOOL)requiresPostInstallAction;
- (void)setAttributesFromDictionary:(id)a0;
- (void)setAutoExpand:(BOOL)a0;
- (void)setDependentItems:(id)a0;
- (void)setFunctionName:(id)a0 forScript:(id)a1;
- (void)setLastTriedState:(int)a0;

@end
