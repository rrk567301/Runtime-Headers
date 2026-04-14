@interface SiriUICollectionViewItem : NSCollectionViewItem

@property BOOL remainsVisibleOnDrag;

+ (id)reuseIdentifier;

- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (void)_setDragging:(BOOL)a0;
- (id)accessibilityParent;
- (id)draggingImageComponents;
- (void)setHighlightState:(long long)a0;
- (BOOL)_isTranscriptCollectionViewItem;

@end
