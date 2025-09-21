@class MCKeyboardState, NSArray, NSMutableArray;

@interface MCKeyboardInput : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *mutableInputs;
@property (nonatomic) unsigned long long composingInputIndex;
@property (readonly, nonatomic) NSArray *inputs;
@property (retain, nonatomic) MCKeyboardInput *composingInput;
@property (readonly, nonatomic) MCKeyboardState *sourceKeyboardState;
@property (readonly, nonatomic) unsigned long long totalDrawSamples;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)asCommittedText;
- (void)removeAllInputs;
- (void)_addNearbyKeys:(id)a0 to:(void *)a1 likelihoodThreshold:(float)a2;
- (id)_asInputStringWithCursorIndex:(unsigned long long *)a0 remainingComposingInputIndex:(unsigned long long *)a1 typeInputs:(id)a2 forSearch:(char)a3 suffix:(id)a4;
- (id)asInlineText;
- (unsigned long long)asInlineTextCursorIndex;
- (id)asMecabraGestures:(char *)a0;
- (id)asSearchString;
- (unsigned long long)asSearchTextCursorIndex;
- (char)canComposeNew:(id)a0;
- (void)composeNew:(id)a0;
- (char)hasDrawInput;
- (char)hasKindOf:(Class)a0;
- (char)hasRemainingComposingInput;
- (id)initWithSourceKeyboardState:(id)a0;
- (void)insertInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeComposingInput;
- (void)removeInputAtIndex:(unsigned long long)a0;
- (void)replaceComposingInputWith:(id)a0;
- (void)replaceInputAtIndex:(unsigned long long)a0 with:(id)a1;
- (id)shortDescriptionExcludingSubInputs;
- (id)shortDescriptionWithLeadingString:(id)a0;

@end
