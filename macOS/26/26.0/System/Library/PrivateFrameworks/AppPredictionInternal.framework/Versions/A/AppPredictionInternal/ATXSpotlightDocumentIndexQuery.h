@interface ATXSpotlightDocumentIndexQuery : NSObject

+ (id)_recentsQueryWithLimit:(unsigned long long)a0 typeIdentifiers:(id)a1;
+ (id)annFileSearchQueryStringWithParams:(BOOL)a0;
+ (void)fetchDocumentsWithReason:(id)a0 queryEmbedding:(id)a1 isPhotosEmbedding:(BOOL)a2 completion:(id /* block */)a3;
+ (void)fetchRecentDocumentsWithLimit:(unsigned long long)a0 typeIdentifiers:(id)a1 completion:(id /* block */)a2;

@end
