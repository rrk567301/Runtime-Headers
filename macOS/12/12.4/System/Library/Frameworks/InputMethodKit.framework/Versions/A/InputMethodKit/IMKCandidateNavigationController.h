@class NSString, IMKLayout;

@interface IMKCandidateNavigationController : NSObject

@property (readonly, nonatomic) unsigned long long lineCount;
@property (nonatomic) unsigned long long numberOfVisibleLines;
@property (nonatomic) BOOL respondsToMovement;
@property (nonatomic) BOOL shouldLoop;
@property (nonatomic, getter=isVerticallyAligned) BOOL verticallyAligned;
@property (nonatomic) double numberOfLinesInWindow;
@property (nonatomic) long long topVisibleLine;
@property (retain, nonatomic) IMKLayout *layout;
@property (copy, nonatomic) NSString *selectedIndex;

- (void)dealloc;
- (id)description;
- (BOOL)moveUp;
- (BOOL)moveDown;
- (void)pageDown;
- (void)pageUp;
- (void)selectFirstCandidate;
- (void)unselectCandidates;
- (struct { long long x0; long long x1; })lineAndSlotForCandidateIndex:(id)a0;
- (id)candidateForIndex:(id)a0;
- (id)currentlySelectedUnit;
- (id)layoutUnitsForLine:(unsigned long long)a0;
- (unsigned long long)currentCandidateIndex;
- (BOOL)moveForward;
- (BOOL)moveBackwards;
- (void)selectLastCandidate;
- (id)dictionaryForPosition:(struct { long long x0; long long x1; })a0;
- (struct { long long x0; long long x1; })positionForDictionary:(id)a0;
- (BOOL)candidateAtLastLine:(struct { long long x0; long long x1; })a0;
- (BOOL)candidatePositionIsLastInLine:(struct { long long x0; long long x1; })a0;
- (unsigned long long)nextValidCandidateIndexForIndex:(unsigned long long)a0;
- (unsigned long long)previousValidCandidateIndex:(unsigned long long)a0;
- (BOOL)isCandidatePositionedInWindow:(struct { long long x0; long long x1; })a0;
- (void)moveToSecondLineFromBottom;
- (void)moveToSecondLineFromTop;
- (BOOL)moveOneStep:(BOOL)a0;
- (BOOL)moveVertically:(BOOL)a0;
- (long long)relativeDistanceFromSelection;
- (void)setRelativeDistanceFromSelection:(long long)a0;
- (void)selectCandidateWithIndex:(id)a0;
- (BOOL)candidatePositionIsFirstInLine:(struct { long long x0; long long x1; })a0;
- (BOOL)candidateAtLastPosition:(struct { long long x0; long long x1; })a0;
- (unsigned long long)layoutUnitLineCount;

@end
