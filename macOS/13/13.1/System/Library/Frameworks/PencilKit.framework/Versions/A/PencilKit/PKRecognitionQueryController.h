@class PKRecognitionSessionManager, NSMutableDictionary;

@interface PKRecognitionQueryController : NSObject

@property (retain) NSMutableDictionary *drawingQueries;
@property (retain) NSMutableDictionary *visibleStrokeQueries;
@property (retain) NSMutableDictionary *queriesToCreate;
@property (retain) NSMutableDictionary *suffixes;
@property (weak, nonatomic) PKRecognitionSessionManager *recognitionManager;

- (void).cxx_destruct;
- (id)initWithRecognitionSessionManager:(id)a0;
- (void)addQueryOfType:(Class)a0 withIdentifier:(id)a1;
- (void)removeQueryWithIdentifier:(id)a0;
- (void)_cleanupQuery:(id)a0;
- (id)visibleStrokesQueryWithIdentifier:(id)a0;
- (id)drawingQueryWithIdentifier:(id)a0;
- (void)updateQueriesIfNecessaryWithState:(long long)a0;
- (void)setupVisibleStrokesQueries;
- (id)setupAndStartQuery:(Class)a0;
- (void)setupDrawingQueriesIfNecessary;
- (void)flushAllQueries;
- (void)clearVisibleStrokesQueries;
- (void)clearDrawingQueries;
- (void)setSuffixes:(id)a0 forQueryWithIdentifier:(id)a1;

@end
