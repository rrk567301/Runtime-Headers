@interface SiriUICollectionViewItem : NSCollectionViewItem

@property char remainsVisibleOnDrag;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)_setDragging:(char)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityParent;
- (id)draggingImageComponents;
- (char)isAccessibilityElement;
- (void)setHighlightState:(long long)a0;
- (void)setSelected:(char)a0;
- (char)_isTranscriptCollectionViewItem;

@end
