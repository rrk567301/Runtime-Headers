@class NSMutableArray, NSHashTable;

@interface CCVegaTransactionCommitter : NSObject {
    NSHashTable *_renderers;
    NSMutableArray *_mainThreadOperations;
    BOOL _needsCATransaction;
}

- (void).cxx_destruct;
- (void)commit;
- (id)initWithRenderers:(id)a0;
- (id)newMainThreadOperation;
- (void)setNeedsCATransaction;

@end
