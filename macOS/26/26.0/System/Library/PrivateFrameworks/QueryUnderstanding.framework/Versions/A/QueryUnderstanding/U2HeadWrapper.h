@class NSBundle, NSDictionary, NSLocale, U2Head;

@interface U2HeadWrapper : NSObject {
    NSLocale *_locale;
    U2Head *_u2Head;
}

@property (class, nonatomic) BOOL useSpotlightResources;
@property (class, retain, nonatomic) NSBundle *U2HeadBundle;

@property (readonly, nonatomic) NSDictionary *metadata;

+ (id)log;
+ (id)signpostLog;

- (id)assetURL;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (id)argmaxWithIndex:(id)a0;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; })getTokenScoresfromScoreTensor:(id)a0 intentIndex:(int)a1 tokens:(id)a2 subtokenLenForTokens:(id)a3 subtokens:(id)a4 scoreFromSubtokenScores:(id /* block */)a5;
- (id)getU2PredictionsForEmbedding:(id)a0 queryString:(id)a1 queryID:(long long)a2 spans:(id)a3 tokens:(id)a4 tokenRanges:(id)a5 subtokenLenForTokens:(id)a6 subtokens:(id)a7 intentHint:(id)a8 error:(id *)a9;
- (id)mapLogitsToLabels:(id)a0 queryString:(id)a1 queryID:(long long)a2 intentHint:(id)a3 tokens:(id)a4 subtokenLenForTokens:(id)a5 subtokens:(id)a6;

@end
