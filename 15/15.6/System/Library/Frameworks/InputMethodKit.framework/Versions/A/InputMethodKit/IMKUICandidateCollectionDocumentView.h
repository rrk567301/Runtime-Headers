@class IMKUICandidateLayoutTraits;

@interface IMKUICandidateCollectionDocumentView : NSView

@property (retain) IMKUICandidateLayoutTraits *layoutTraits;
@property char scrollsInLineIncrements;
@property (getter=isUsingRubberbanding) char usingRubberbanding;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;

@end
