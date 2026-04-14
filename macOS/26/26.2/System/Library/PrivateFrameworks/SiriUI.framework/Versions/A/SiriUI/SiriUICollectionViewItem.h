@interface SiriUICollectionViewItem : NSCollectionViewItem

@property BOOL remainsVisibleOnDrag;

+ (id)reuseIdentifier;

- (id)accessibilityIdentifier;
- (void)setSelected:(BOOL)a0;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)_setDragging:(BOOL)a0;
- (id)accessibilityParent;
- (id)draggingImageComponents;
- (void)setHighlightState:(long long)a0;
- (BOOL)_isTranscriptCollectionViewItem;

@end
