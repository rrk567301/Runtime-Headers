@interface SiriUICollectionViewItem : NSCollectionViewItem

@property BOOL remainsVisibleOnDrag;

+ (id)reuseIdentifier;

- (void)setSelected:(BOOL)a0;
- (id)accessibilityIdentifier;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void)_setDragging:(BOOL)a0;
- (id)accessibilityParent;
- (id)draggingImageComponents;
- (void)setHighlightState:(long long)a0;
- (BOOL)_isTranscriptCollectionViewItem;

@end
