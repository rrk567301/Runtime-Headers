@class NSArray, ContextualSpanMatcher;

@interface CDMContextualSpanMatcherService : CDMDAGBaseService

@property (retain, nonatomic) ContextualSpanMatcher *contextualSpanMatcher;
@property (readonly, nonatomic) NSArray *overrideSpansForReplay;

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;

- (void).cxx_destruct;
- (id)setup:(id)a0;
- (id)handle:(id)a0;
- (id)getPredictor;
- (id)getContextualSpansInternal:(id)a0;
- (id)handleRequestCommandTypeNames;

@end
