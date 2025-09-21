@class NSString, IMKLayout;

@interface IMKCandidateNavigationController : NSObject

@property (readonly, nonatomic) unsigned long long lineCount;
@property (nonatomic) unsigned long long numberOfVisibleLines;
@property (nonatomic) char respondsToMovement;
@property (nonatomic) char shouldLoop;
@property (nonatomic, getter=isVerticallyAligned) char verticallyAligned;
@property (nonatomic) double numberOfLinesInWindow;
@property (nonatomic) long long topVisibleLine;
@property (retain, nonatomic) IMKLayout *layout;
@property (copy, nonatomic) NSString *selectedIndex;

- (void)dealloc;
- (id)description;
- (char)moveDown;
- (char)moveUp;
- (void)pageDown;
- (void)pageUp;
- (char)candidatePositionIsFirstInLine:(struct { long long x0; long long x1; })a0;
- (char)moveVertically:(char)a0;
- (char)candidateAtLastLine:(struct { long long x0; long long x1; })a0;
- (char)candidateAtLastPosition:(struct { long long x0; long long x1; })a0;
- (id)candidateForIndex:(id)a0;
- (char)candidatePositionIsLastInLine:(struct { long long x0; long long x1; })a0;
- (unsigned long long)currentCandidateIndex;
- (id)currentlySelectedUnit;
- (id)dictionaryForPosition:(struct { long long x0; long long x1; })a0;
- (char)isCandidatePositionedInWindow:(struct { long long x0; long long x1; })a0;
- (unsigned long long)layoutUnitLineCount;
- (id)layoutUnitsForLine:(unsigned long long)a0;
- (struct { long long x0; long long x1; })lineAndSlotForCandidateIndex:(id)a0;
- (char)moveBackwards;
- (char)moveForward;
- (char)moveOneStep:(char)a0;
- (void)moveToSecondLineFromBottom;
- (void)moveToSecondLineFromTop;
- (unsigned long long)nextValidCandidateIndexForIndex:(unsigned long long)a0;
- (struct { long long x0; long long x1; })positionForDictionary:(id)a0;
- (unsigned long long)previousValidCandidateIndex:(unsigned long long)a0;
- (long long)relativeDistanceFromSelection;
- (void)selectCandidateWithIndex:(id)a0;
- (void)selectFirstCandidate;
- (void)selectLastCandidate;
- (void)setRelativeDistanceFromSelection:(long long)a0;
- (void)unselectCandidates;

@end
