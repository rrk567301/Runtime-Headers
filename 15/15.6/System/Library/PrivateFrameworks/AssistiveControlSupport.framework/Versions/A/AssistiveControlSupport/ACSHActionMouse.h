@interface ACSHActionMouse : ACSHAction

@property (nonatomic) unsigned long long mouseAction;
@property (nonatomic) unsigned long long mouseButton;
@property (nonatomic) unsigned long long clickCount;
@property (nonatomic) unsigned long long moveDirectionInDegrees;
@property (nonatomic) struct CGPoint { double x; double y; } startPosition;
@property (nonatomic) double moveSpeed;
@property (nonatomic) char isReverseMove;
@property (nonatomic) char isRepeatMove;
@property (nonatomic) char isBouncingBack;
@property (nonatomic) char modifiedWithControl;
@property (nonatomic) char modifiedWithOption;
@property (nonatomic) char modifiedWithCommand;
@property (nonatomic) char modifiedWithShift;
@property (nonatomic) char autoClick;
@property (nonatomic) unsigned long long scanBoundary;
@property (nonatomic) unsigned long long cycleCount;

+ (void)initialize;
+ (id)_actionMoveWithUndoManager:(id)a0 direction:(unsigned long long)a1 isRepeat:(char)a2 isReverse:(char)a3 speed:(double)a4;
+ (id)actionDoubleClickWithUndoManager:(id)a0 modifiedWithControl:(char)a1 modifiedWithOption:(char)a2 modifiedWithCommand:(char)a3 modifiedWithShift:(char)a4;
+ (id)actionGlideWithUndoManager:(id)a0 autoClick:(char)a1 scanBoundary:(unsigned long long)a2;
+ (id)actionLeftClickWithUndoManager:(id)a0 modifiedWithControl:(char)a1 modifiedWithOption:(char)a2 modifiedWithCommand:(char)a3 modifiedWithShift:(char)a4;
+ (id)actionMoveRepeatWithUndoManager:(id)a0 speed:(double)a1;
+ (id)actionMoveReverseWithUndoManager:(id)a0 speed:(double)a1;
+ (id)actionMoveWithUndoManager:(id)a0 direction:(unsigned long long)a1 speed:(double)a2;
+ (id)actionRightClickWithUndoManager:(id)a0 modifiedWithControl:(char)a1 modifiedWithOption:(char)a2 modifiedWithCommand:(char)a3 modifiedWithShift:(char)a4;
+ (id)actionRotateWithUndoManager:(id)a0 autoClick:(char)a1 scanBoundary:(unsigned long long)a2;
+ (id)actionToggleDragWithUndoManager:(id)a0 modifiedWithControl:(char)a1 modifiedWithOption:(char)a2 modifiedWithCommand:(char)a3 modifiedWithShift:(char)a4;
+ (id)actionTripleClickWithUndoManager:(id)a0 modifiedWithControl:(char)a1 modifiedWithOption:(char)a2 modifiedWithCommand:(char)a3 modifiedWithShift:(char)a4;
+ (id)clickActionWithButton:(unsigned long long)a0 type:(unsigned long long)a1 modifiedWithControl:(char)a2 modifiedWithOption:(char)a3 modifiedWithCommand:(char)a4 modifiedWithShift:(char)a5 undoManager:(id)a6;
+ (unsigned long long)clickCountForMouseAction:(unsigned long long)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (long long)_foundationButton;
- (struct CGSize { double x0; double x1; })_mouseMovementDelta;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;
- (double)repeatFrequencyInSeconds;
- (char)shouldAutoRepeat;
- (char)shouldPerform;

@end
