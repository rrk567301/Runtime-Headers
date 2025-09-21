@class CPParagraph, NSMutableArray;

@interface CPParagraphFlow : NSObject {
    double fTop;
    NSMutableArray *paragraphsAbove;
    NSMutableArray *paragraphsBelow;
    NSMutableArray *paragraphsLeft;
    NSMutableArray *paragraphsRight;
    char adjacentToCallout;
}

@property (retain, nonatomic) CPParagraph *paragraph;
@property (nonatomic) CPParagraph *nextInColumn;
@property double fLeft;
@property double fRight;
@property double fBottom;
@property char placed;
@property int calloutType;

- (void)dealloc;
- (id)description;
- (int)inOrder;
- (id)paragraphsBelow;
- (id)ignoreCallouts:(unsigned int)a0;
- (id)paragraphsAbove;
- (id)paragraphsRight;
- (double)area;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })belowBounds;
- (id)belowTwoSides:(unsigned int)a0;
- (double)dAbove;
- (double)dBelow;
- (int)inOrder:(char)a0;
- (id)initWithParagraph:(id)a0;
- (char)intervalOverlapLeft:(double)a0 right:(double)a1 paragraphs:(id)a2;
- (char)intervalOverlapLeft:(double)a0 right:(double)a1 rects:(id)a2;
- (char)intervalOverlapTop:(double)a0 bottom:(double)a1 paragraphs:(id)a2;
- (int)leftOrder;
- (id)nextParagraphInColumn:(id)a0;
- (int)outOrder;
- (id)paragraphsLeft;
- (void)removeFromAbove:(id)a0;
- (void)removeFromBelow:(id)a0;
- (void)replaceAbove:(id)a0 withOneOf:(id)a1;
- (void)replaceBelow:(id)a0 withOneOf:(id)a1;
- (int)rightOrder;
- (void)setParagraphsAboveIn:(id)a0;
- (void)setParagraphsBelowIn:(id)a0;
- (void)setParagraphsLeftIn:(id)a0;
- (void)setParagraphsRightIn:(id)a0;
- (id)simpleRule:(unsigned int)a0;
- (long long)topDescending:(id)a0;
- (id)twoSides:(unsigned int)a0;

@end
