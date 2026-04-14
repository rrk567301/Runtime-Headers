@class CPKCharactersSectionView;

@interface CPKAXDataItem : NSObject

@property (readonly) CPKCharactersSectionView *parent;
@property long long section;
@property long long index;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)initWithParent:(id)a0 index:(long long)a1 section:(long long)a2;

@end
