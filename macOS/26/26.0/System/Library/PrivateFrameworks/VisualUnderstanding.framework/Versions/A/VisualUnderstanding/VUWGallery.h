@class NSSet;

@interface VUWGallery : NSObject {
    void /* unknown type, empty encoding */ gallery;
}

@property (nonatomic, readonly) BOOL ready;
@property (nonatomic, readonly) long long faceprintRevision;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSSet *unassignedObservations;

- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (void)reportMetrics;
- (id)changesSince:(id)a0 error:(id *)a1 body:(id /* block */)a2;
- (id)clustersFor:(long long)a0;
- (id)keyObservationsFor:(id)a0 limit:(long long)a1 offset:(long long)a2;
- (BOOL)mutateAndReturnError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)similarEntitiesTo:(id)a0 error:(id *)a1 body:(id /* block */)a2;
- (BOOL)updateAndReturnError:(id *)a0 progressHandler:(id /* block */)a1;
- (id)initWithClient:(long long)a0 path:(id)a1 error:(id *)a2;
- (id)recognize:(id)a0 context:(id)a1 recognitionPreset:(long long)a2 error:(id *)a3;
- (BOOL)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 observation:(id)a2 type:(long long)a3 options:(id)a4 error:(id *)a5;
- (long long)assetCountForType:(long long)a0;
- (id)assetsFor:(long long)a0;
- (id)entities:(id)a0 error:(id *)a1 body:(id /* block */)a2;
- (id)inferredDeviceOwnerWith:(BOOL)a0;
- (BOOL)personalizeEmbeddingLayer:(id *)a0 index:(long long)a1 tag:(id)a2 client:(long long)a3 type:(long long)a4 options:(id)a5 error:(id *)a6;
- (BOOL)prewarmAndReturnError:(id *)a0;
- (BOOL)resetForType:(long long)a0 error:(id *)a1;
- (id)similarityBetween:(id)a0 and:(id)a1 error:(id *)a2;
- (id)tokenEmbeddingsForObservation:(id)a0 type:(long long)a1 error:(id *)a2;
- (id)tokenEmbeddingsForTag:(id)a0 client:(long long)a1 type:(long long)a2 error:(id *)a3;
- (BOOL)updateForType:(long long)a0 mode:(long long)a1 progressHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)updateForType:(long long)a0 withVectorStore:(id)a1 mode:(long long)a2 progressHandler:(id /* block */)a3 error:(id *)a4;
- (BOOL)updatePlugin:(long long)a0 progressHandler:(id /* block */)a1 error:(id *)a2;

@end
