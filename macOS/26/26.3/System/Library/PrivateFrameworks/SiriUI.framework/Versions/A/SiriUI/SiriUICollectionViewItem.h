@interface SiriUICollectionViewItem : NSCollectionViewItem

@property BOOL remainsVisibleOnDrag;

+ (id)reuseIdentifier;

- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)_setDragging:(BOOL)a0;
- (id)accessibilityParent;
- (id)draggingImageComponents;
- (void)setHighlightState:(long long)a0;
- (BOOL)_isTranscriptCollectionViewItem;

@end
