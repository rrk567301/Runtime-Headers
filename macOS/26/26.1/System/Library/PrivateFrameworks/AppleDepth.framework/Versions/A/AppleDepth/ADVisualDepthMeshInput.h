@class NSArray, NSMutableArray;

@interface ADVisualDepthMeshInput : NSObject {
    NSMutableArray *_MutableMeshChunks;
}

@property (readonly, retain, nonatomic) NSArray *meshChunks;

- (void)clear;
- (void).cxx_destruct;
- (id)init;
- (void)addChunk:(id)a0;
- (BOOL)removeChunkWithUUID:(id)a0;

@end
