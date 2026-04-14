@class NSArray;

@interface REMCRUndo : NSObject

@property (readonly, nonatomic) NSArray *undoBlocks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUndoBlocks:(id)a0;

@end
