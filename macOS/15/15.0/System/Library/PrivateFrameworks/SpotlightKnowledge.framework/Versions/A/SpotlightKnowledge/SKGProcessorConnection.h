@interface SKGProcessorConnection : CSXPCConnection

- (id)init;
- (void)setTurboMode:(BOOL)a0;
- (void)updateCheckedInClientWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)initForImporter;
- (void)checkProcessingReportForBundleIdentifier:(id)a0 flags:(unsigned long long)a1 timeout:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)getEmbeddingGenerationProgressReport:(id /* block */)a0;
- (void)processRecord:(id)a0 referenceIdentifier:(id)a1 protectionClass:(id)a2 includeEmbeddings:(BOOL)a3 includeKeyphrases:(BOOL)a4 includePeople:(BOOL)a5 completionHandler:(id /* block */)a6;

@end
