@class EXSChangeItem;

@interface EXSEWSMoveItemOperation : EXSEWSOperation

@property (retain, nonatomic) EXSChangeItem *updatedChangeItem;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (char)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
