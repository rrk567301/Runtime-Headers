@class IMKUICandidate, NSImageView, NSString;
@protocol IMKUICandidateItemViewHandling;

@interface IMKUICandidateItemView : NSView <IMKCandidateLookupSupport>

@property (retain, nonatomic) NSImageView *hintView;
@property (retain, nonatomic) IMKUICandidate *candidateItem;
@property (weak, nonatomic) id<IMKUICandidateItemViewHandling> delegate;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *selectionKey;

- (void).cxx_destruct;
- (void)setNeedsDisplay:(BOOL)a0;
- (BOOL)isFlipped;
- (void)removeFromSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseUp:(id)a0;
- (id)candidate;
- (void)configureHint;
- (void)adjustImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureHintView;

@end
