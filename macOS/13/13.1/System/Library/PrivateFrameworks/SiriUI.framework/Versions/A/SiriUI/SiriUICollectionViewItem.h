@interface SiriUICollectionViewItem : NSCollectionViewItem

@property BOOL remainsVisibleOnDrag;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (id)accessibilityParent;
- (id)accessibilityIdentifier;
- (void)setSelected:(BOOL)a0;
- (void)setHighlightState:(long long)a0;
- (void)_setDragging:(BOOL)a0;
- (id)draggingImageComponents;
- (BOOL)_isTranscriptCollectionViewItem;

@end
