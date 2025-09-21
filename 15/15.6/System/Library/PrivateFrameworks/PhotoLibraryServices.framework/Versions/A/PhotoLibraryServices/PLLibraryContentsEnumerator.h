@class NSManagedObjectContext, NSMutableArray;

@interface PLLibraryContentsEnumerator : NSObject {
    NSMutableArray *_assetHandlerBlocks;
    NSMutableArray *_albumHandlerBlocks;
    NSMutableArray *_resourceHandlerBlocks;
    NSMutableArray *_conversationHandlerBlocks;
    NSMutableArray *_faceHandlerBlocks;
    NSMutableArray *_personHandlerBlocks;
    NSMutableArray *_endOfListHandlerBlocks;
}

@property (readonly, nonatomic) NSManagedObjectContext *sourceContext;
@property (readonly, nonatomic) char concurrent;
@property (readonly, nonatomic) char readOnly;

- (void).cxx_destruct;
- (char)processObjectsWithError:(id *)a0;
- (void)addFaceVisitor:(id /* block */)a0;
- (unsigned long long)_enumerateAndSaveOptions;
- (id)_setupAlbumController;
- (id)_setupAssetResourceFaceController;
- (id)_setupConversationController;
- (id)_setupPersonController;
- (void)addAlbumVisitor:(id /* block */)a0;
- (void)addAssetVisitor:(id /* block */)a0;
- (void)addConversationVisitor:(id /* block */)a0;
- (void)addEndOfListVisitor:(id /* block */)a0;
- (void)addPersonVisitor:(id /* block */)a0;
- (void)addResourceVisitor:(id /* block */)a0;
- (id)initWithSourceManagedObjectContext:(id)a0 concurrent:(char)a1 readOnly:(char)a2;

@end
