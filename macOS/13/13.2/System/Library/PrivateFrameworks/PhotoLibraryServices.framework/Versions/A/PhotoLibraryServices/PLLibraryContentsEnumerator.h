@class NSManagedObjectContext, NSMutableArray;

@interface PLLibraryContentsEnumerator : NSObject {
    NSMutableArray *_assetHandlerBlocks;
    NSMutableArray *_albumHandlerBlocks;
    NSMutableArray *_resourceHandlerBlocks;
    NSMutableArray *_conversationHandlerBlocks;
    NSMutableArray *_faceHandlerBlocks;
    NSMutableArray *_endOfListHandlerBlocks;
}

@property (readonly, nonatomic) NSManagedObjectContext *sourceContext;
@property (readonly, nonatomic) BOOL concurrent;

- (void).cxx_destruct;
- (id)initWithSourceManagedObjectContext:(id)a0 concurrent:(BOOL)a1;
- (void)addAssetVisitor:(id /* block */)a0;
- (void)addAlbumVisitor:(id /* block */)a0;
- (void)addResourceVisitor:(id /* block */)a0;
- (void)addConversationVisitor:(id /* block */)a0;
- (void)addFaceVisitor:(id /* block */)a0;
- (void)addEndOfListVisitor:(id /* block */)a0;
- (id)_setupAssetResourceFaceController;
- (id)_setupAlbumController;
- (id)_setupConversationController;
- (BOOL)processObjectsWithError:(id *)a0;

@end
