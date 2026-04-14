@interface CKDOperationInfoHolderOperation : CKDOperation

@property (nonatomic) int operationType;

- (void)main;
- (BOOL)shouldKeepXPCConnectionAlive;
- (id)initWithOperationInfo:(id)a0 container:(id)a1 operationType:(int)a2;

@end
