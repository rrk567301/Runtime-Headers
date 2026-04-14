@class CPCharSequence;

@interface CPZoneMaker : NSObject {
    CPCharSequence *charactersOnPage;
}

- (void)dealloc;
- (BOOL)overlap:(id)a0 with:(id)a1;
- (void)makeZonesIn:(id)a0;
- (unsigned int)categorizeGraphicsIn:(id)a0;
- (void)mergeQualifyingRectanglesIn:(id)a0;
- (void)addZonesWithBoundaryIn:(id)a0 withBorder:(id)a1;
- (void)makeZonesWithBoundaryIn:(id)a0;
- (void)splitByRotatation:(id)a0 inPage:(id)a1;
- (void)cutHorizontalBorders:(id)a0 whereObscuredByShape:(id)a1;
- (void)cutVerticalBorders:(id)a0 whereObscuredByShape:(id)a1;
- (void)addObjectsToStraddler:(id)a0 from:(id)a1;
- (id)newZoneForStraddlersFrom:(id)a0;

@end
