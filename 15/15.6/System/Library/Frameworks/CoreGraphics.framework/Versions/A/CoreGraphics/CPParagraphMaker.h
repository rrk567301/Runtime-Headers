@class CPPage, NSMutableArray, CPZone;

@interface CPParagraphMaker : NSObject {
    NSMutableArray *avail;
    NSMutableArray *paragraphs;
    NSMutableArray *compoundedShapesOnPage;
    char spacingSet;
    double currentSpacing;
    CPZone *parent;
    CPPage *page;
}

+ (char)line:(id)a0 alignsWith:(id)a1;

- (void)dealloc;
- (id)paragraphs;
- (void)addCompoundedShapesOn:(id)a0 to:(id)a1;
- (void)addIntersectingParagraph:(id)a0;
- (void)addLinesTo:(id)a0;
- (unsigned long long)alignmentOf:(id)a0 and:(id)a1;
- (unsigned long long)alignmentOf:(id)a0 and:(id)a1 and:(id)a2;
- (char)firstWordOf:(id)a0 fits:(id)a1 indent:(double)a2;
- (char)fitsBelow:(id)a0 alignment:(unsigned long long)a1 spacing:(double)a2 from:(int)a3;
- (int)indexOfUniqueLineBelow:(id)a0 from:(int)a1;
- (char)isGraphicBetween:(id)a0 and:(id)a1;
- (char)line:(id)a0 isAlignedWith:(id)a1;
- (char)line:(id)a0 isBelow:(id)a1;
- (char)line:(id)a0 isDirectlyBelow:(id)a1;
- (int)linesThatOverlapLineAt:(int)a0 between:(double)a1 and:(double)a2 from:(int)a3;
- (void)makeParagraphsIn:(id)a0;
- (id)newInitialParagraphIn:(id)a0;
- (int)paragraph:(id)a0 splits:(id)a1;
- (char)spacingOf:(id)a0 and:(id)a1 and:(id)a2 is:(double *)a3;
- (char)styleOf:(id)a0 differsFromStyleOf:(id)a1;

@end
