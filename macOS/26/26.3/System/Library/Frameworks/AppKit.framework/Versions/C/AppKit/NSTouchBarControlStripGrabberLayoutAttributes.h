@interface NSTouchBarControlStripGrabberLayoutAttributes : NSCollectionViewLayoutAttributes

@property (getter=isEnabled) BOOL enabled;
@property long long state;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
