@class NSString;

@interface AVLayoutItemAttributes : NSObject <NSCopying>

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) unsigned long long displayPriority;
@property (weak) AVLayoutItemAttributes *displayPartnerAttributes;
@property (nonatomic) BOOL hasFlexibleContentSize;
@property (nonatomic) BOOL prefersSecondaryMaterialOverlay;
@property (nonatomic) BOOL canOverflowToAuxiliaryMenu;
@property (nonatomic) BOOL canOnlyAppearInControlOverflowMenu;
@property (nonatomic) BOOL canSubstituteOtherAttributes;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) double trailingInterItemSpace;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (retain, nonatomic) AVLayoutItemAttributes *nextAttributesInLayoutOrder;
@property (weak, nonatomic) AVLayoutItemAttributes *nextAttributesInPriorityOrder;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
