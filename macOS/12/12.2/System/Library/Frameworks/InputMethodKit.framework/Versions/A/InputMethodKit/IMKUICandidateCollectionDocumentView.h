@class IMKUICandidateLayoutTraits;

@interface IMKUICandidateCollectionDocumentView : NSView

@property (retain) IMKUICandidateLayoutTraits *layoutTraits;
@property BOOL scrollsInLineIncrements;
@property (getter=isUsingRubberbanding) BOOL usingRubberbanding;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
