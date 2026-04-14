@class IMKUICandidateLayoutTraits;

@interface IMKUICandidateCollectionDocumentView : NSView

@property (retain) IMKUICandidateLayoutTraits *layoutTraits;
@property BOOL scrollsInLineIncrements;
@property (getter=isUsingRubberbanding) BOOL usingRubberbanding;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void).cxx_destruct;

@end
