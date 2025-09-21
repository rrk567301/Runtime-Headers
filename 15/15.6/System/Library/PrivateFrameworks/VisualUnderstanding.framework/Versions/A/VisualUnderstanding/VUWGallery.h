@interface VUWGallery : NSObject {
    void /* unknown type, empty encoding */ gallery;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (char)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 observation:(id)a2 type:(long long)a3 options:(id)a4 error:(id *)a5;
- (char)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 tag:(id)a2 client:(long long)a3 type:(long long)a4 options:(id)a5 error:(id *)a6;
- (id)tokenEmbeddingsForObservation:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)tokenEmbeddingsForTag:(id)a0 client:(long long)a1 type:(long long)a2 error:(id *)a3;
- (char)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 observation:(id)a2 context:(id)a3 type:(long long)a4 error:(id *)a5;
- (long long)assetCountForType:(long long)a0;
- (char)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 observation:(id)a2 context:(id)a3 type:(long long)a4 boundingBox:(id)a5 error:(id *)a6;
- (char)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 observation:(id)a2 context:(id)a3 type:(long long)a4 randomizeWithSeed:(long long)a5 error:(id *)a6;
- (char)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 tag:(id)a2 client:(long long)a3 type:(long long)a4 boundingBox:(id)a5 error:(id *)a6;
- (char)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 tag:(id)a2 client:(long long)a3 type:(long long)a4 error:(id *)a5;
- (char)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 tag:(id)a2 client:(long long)a3 type:(long long)a4 randomizeWithSeed:(long long)a5 error:(id *)a6;
- (char)prewarmAndReturnError:(id *)a0;
- (char)resetForType:(long long)a0 error:(id *)a1;
- (char)updateForType:(long long)a0 withVectorStore:(id)a1 force:(char)a2 progressHandler:(id /* block */)a3 error:(id *)a4;
- (char)updateForType:(long long)a0 withVectorStore:(id)a1 mode:(long long)a2 progressHandler:(id /* block */)a3 error:(id *)a4;
- (char)updateForType:(long long)a0 withVectorStore:(id)a1 progressHandler:(id /* block */)a2 error:(id *)a3;
- (char)updatePlugin:(long long)a0 progressHandler:(id /* block */)a1 error:(id *)a2;

@end
