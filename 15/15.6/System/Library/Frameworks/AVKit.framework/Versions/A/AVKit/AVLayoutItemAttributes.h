@class NSString;

@interface AVLayoutItemAttributes : NSObject <NSCopying>

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) unsigned long long displayPriority;
@property (weak) AVLayoutItemAttributes *displayPartnerAttributes;
@property (nonatomic) char hasFlexibleContentSize;
@property (nonatomic) char prefersSecondaryMaterialOverlay;
@property (nonatomic) char canOverflowToAuxiliaryMenu;
@property (nonatomic) char canOnlyAppearInControlOverflowMenu;
@property (nonatomic) char canSubstituteOtherAttributes;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic, getter=isCollapsed) char collapsed;
@property (nonatomic, getter=isIncluded) char included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) char collapsedOrExcluded;
@property (nonatomic) double trailingInterItemSpace;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (retain, nonatomic) AVLayoutItemAttributes *nextAttributesInLayoutOrder;
@property (weak, nonatomic) AVLayoutItemAttributes *nextAttributesInPriorityOrder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
