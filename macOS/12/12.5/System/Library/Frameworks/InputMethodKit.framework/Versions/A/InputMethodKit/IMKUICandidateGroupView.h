@class IMKUICandidateLayoutTraits, NSMutableDictionary, NSArray;

@interface IMKUICandidateGroupView : NSView

@property (retain, nonatomic) NSMutableDictionary *itemToViewMapping;
@property (retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits;
@property (retain, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
