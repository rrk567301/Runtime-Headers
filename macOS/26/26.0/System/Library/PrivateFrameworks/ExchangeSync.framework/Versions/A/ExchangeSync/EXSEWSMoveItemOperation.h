@class EXSChangeItem;

@interface EXSEWSMoveItemOperation : EXSEWSOperation

@property (retain, nonatomic) EXSChangeItem *updatedChangeItem;

- (id)initWithProtocol:(id)a0;
- (void).cxx_destruct;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
