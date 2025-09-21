@interface PPSocialHighlightStore : NSObject

+ (double)decayInterval;

- (id)init;
- (id)attributionForIdentifier:(id)a0 error:(id *)a1;
- (void)feedbackForAttributionIdentifier:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 completion:(id /* block */)a4;
- (void)feedbackForHighlightIdentifier:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 completion:(id /* block */)a4;
- (void)feedbackForHighlightResourceURL:(id)a0 resolvedURL:(id)a1 type:(unsigned long long)a2 client:(id)a3 variant:(id)a4 completion:(id /* block */)a5;
- (char)iterRankedCollaborationsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 block:(id /* block */)a4;
- (char)iterRankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 block:(id /* block */)a4;
- (char)iterRankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 error:(id *)a3 block:(id /* block */)a4;
- (char)iterRankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 reason:(id)a3 error:(id *)a4 block:(id /* block */)a5;

@end
