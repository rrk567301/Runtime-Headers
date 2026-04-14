@class NSArray, NSMutableArray;

@interface IMKCandidateDisplayArray : NSObject

@property (readonly, nonatomic) NSMutableArray *currentArray;
@property (retain, nonatomic) NSMutableArray *internalArray;
@property (nonatomic) double length;
@property (readonly, nonatomic) NSArray *positionedUIStrings;

- (void)dealloc;
- (void)addString:(id)a0 distance:(double)a1 rightAligned:(BOOL)a2;
- (void)addString:(id)a0 distance:(double)a1;
- (void)addRightAlignedString:(id)a0 distance:(double)a1;
- (void)lineBreak;

@end
