@interface VUWObservation : NSObject {
    void /* unknown type, empty encoding */ vuObservation;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSceneObservation:(id)a0;
- (id)initWithAnimalObservation:(id)a0;
- (id)initWithObservation:(id)a0 error:(id *)a1;
- (id)initWithPersonObservation:(id)a0 embeddingExpiration:(id)a1 contextualEmbeddingExpiration:(id)a2 error:(id *)a3;
- (id)initWithType:(long long)a0 embedding:(id)a1 embeddingRevision:(id)a2 embeddingExpiration:(id)a3 contextualEmbedding:(id)a4 contextualEmbeddingRevision:(id)a5 contextualEmbeddingExpiration:(id)a6 embeddingConfidence:(id)a7 contextualEmbeddingConfidence:(id)a8;

@end
