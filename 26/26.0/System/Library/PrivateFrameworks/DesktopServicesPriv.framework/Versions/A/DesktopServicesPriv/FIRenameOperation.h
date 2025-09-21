@class NSString, FIRenameSubOperation, FINode;

@interface FIRenameOperation : FIOperation

@property (retain, nonatomic) FIRenameSubOperation *subOperation;
@property (nonatomic) struct optional_bool { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } hideExtension;
@property (readonly) FINode *node;
@property (readonly) NSString *rawName;

- (void)schedule;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithNode:(id)a0 rawName:(id)a1 hideExtension:(const void *)a2;
- (id)initWithNode:(id)a0 rawName:(id)a1;
- (id)initWithNode:(id)a0 rawName:(id)a1 hideExtension:(BOOL)a2;
- (id)makeOperationRecordForNode:(id)a0;
- (void)tearDownCallbacks;

@end
