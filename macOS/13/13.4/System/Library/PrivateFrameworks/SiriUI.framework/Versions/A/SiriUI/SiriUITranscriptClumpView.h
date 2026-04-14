@interface SiriUITranscriptClumpView : SiriUIClumpView

- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (id)transcriptCollectionView;

@end
