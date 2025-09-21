@class NSArray, NSMutableArray;

@interface ADVisualDepthMeshInput : NSObject {
    NSMutableArray *_MutableMeshChunks;
}

@property (readonly, retain, nonatomic) NSArray *meshChunks;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)addChunk:(id)a0;
- (BOOL)removeChunkWithUUID:(id)a0;

@end
