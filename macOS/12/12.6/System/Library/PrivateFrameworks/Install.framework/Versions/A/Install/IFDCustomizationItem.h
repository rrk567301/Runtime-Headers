@interface IFDCustomizationItem : NSObject {
    struct IFDCustomizationItem_Private { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; } *_private;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)identifier;
- (id)initWithIdentifier:(id)a0;
- (id)action;
- (void)setAction:(id)a0;
- (void)setTitle:(id)a0;
- (id)attributes;
- (struct __CFBundle { } *)bundle;
- (id)title;
- (void)setVisible:(BOOL)a0;
- (int)itemState;
- (BOOL)visible;
- (id)tooltip;
- (id)parentItem;
- (void)setParentItem:(id)a0;
- (void)setItemState:(int)a0;
- (id)attributeForKey:(id)a0;
- (id)descriptionString;
- (void)setPackages:(id)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
- (BOOL)requiresAuthorization;
- (int)selectionState;
- (void)setSelectionState:(int)a0;
- (void)setTooltip:(id)a0;
- (id)subItems;
- (void)setCustomLocation:(id)a0;
- (id)customLocation;
- (id)propertyDictionary;
- (void)setShowSize:(BOOL)a0;
- (BOOL)showSize;
- (id)filePathsForItem;
- (id)activePackages;
- (int)lastTriedState;
- (void)setLastTriedState:(int)a0;
- (BOOL)locationCustomizable;
- (id)allPackages;
- (id)functionNameForScript:(id)a0;
- (id)descriptionMIMEType;
- (BOOL)autoExpand;
- (void)setAutoExpand:(BOOL)a0;
- (id)deepCopyWithNewParent:(id)a0 andWithChoiceList:(id)a1;
- (void)addSubItem:(id)a0;
- (void)addPackages:(id)a0;
- (void)setAttributesFromDictionary:(id)a0;
- (void)removeAllSubItems;
- (void)setDependentItems:(id)a0;
- (id)dependentItems;
- (BOOL)requiresPostInstallAction;
- (void)setFunctionName:(id)a0 forScript:(id)a1;

@end
