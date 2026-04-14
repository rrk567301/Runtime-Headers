@class NSMutableArray;

@interface REMMutableCRUndo : NSObject

@property (readonly, nonatomic) NSMutableArray *undoBlocks;

- (id)immutableCopy;
- (void).cxx_destruct;
- (id)init;
- (void)addUndoBlock:(id /* block */)a0;

@end
