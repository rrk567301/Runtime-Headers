@interface NSCollectionViewLayoutAttributesAuxiliary : NSObject <NSCopying>

@property double fractionIntoEndZone;
@property double distanceIntoEndZone;
@property (getter=isFloating) char floating;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
