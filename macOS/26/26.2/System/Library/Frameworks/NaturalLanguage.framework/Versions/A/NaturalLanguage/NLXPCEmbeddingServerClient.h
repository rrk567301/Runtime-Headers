@class NSXPCConnection;

@interface NLXPCEmbeddingServerClient : NSObject {
    NSXPCConnection *_connection;
    BOOL _valid;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)setValid:(BOOL)a0;
- (BOOL)isValid;
- (id)connection;
- (id)init;
- (void)batchDataFromTokenVectorEmbeddingForStrings:(id)a0 language:(id)a1 identifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)compileModelWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)dataFromSentenceVectorEmbeddingForString:(id)a0 language:(id)a1 identifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)dataFromTokenVectorEmbeddingForString:(id)a0 language:(id)a1 identifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)loadModelWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)synchronousBatchDataFromTokenVectorEmbeddingForStrings:(id)a0 language:(id)a1 identifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)synchronousDataFromTokenVectorEmbeddingForString:(id)a0 language:(id)a1 identifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)synchronousLoadModelWithIdentifier:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;

@end
