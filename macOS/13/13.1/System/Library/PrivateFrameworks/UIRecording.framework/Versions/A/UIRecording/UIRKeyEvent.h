@interface UIRKeyEvent : UIREvent

- (id)description;
- (id)charactersIgnoringModifiers;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0 withProcess:(id)a1;
- (struct __CGEvent { } *)cgEventToPostToProcess:(id)a0 withLastEvent:(id)a1 withLastCGEvent:(struct __CGEvent { } *)a2 error:(id *)a3;
- (int)cgKeyCode;

@end
