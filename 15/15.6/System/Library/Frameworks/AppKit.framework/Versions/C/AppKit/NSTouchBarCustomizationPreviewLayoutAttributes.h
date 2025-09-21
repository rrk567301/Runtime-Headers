@interface NSTouchBarCustomizationPreviewLayoutAttributes : NSCollectionViewLayoutAttributes

@property long long itemState;
@property (getter=isEditable) char editable;
@property (getter=isSpace) char isSpace;
@property char showsAppState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;

@end
