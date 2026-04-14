@class NSImageView, IMKUICandidateSeparatorView, NSString, NSView, IMKUICandidate;
@protocol IMKUICandidateItemViewHandling;

@interface IMKUICandidateItemView : NSView <IMKCandidateLookupSupport> {
    NSView *_supplementalContentView;
}

@property (retain, nonatomic) NSImageView *hintView;
@property (retain, nonatomic) IMKUICandidateSeparatorView *separatorView;
@property (retain, nonatomic) IMKUICandidate *candidateItem;
@property (weak, nonatomic) id<IMKUICandidateItemViewHandling> delegate;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *selectionKey;

- (void)mouseUp:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (id)candidate;
- (BOOL)isFlipped;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)adjustImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureHint;
- (void)configureHintView;
- (void)configureSupplementalContentView;
- (void)updateSeparatorView;

@end
