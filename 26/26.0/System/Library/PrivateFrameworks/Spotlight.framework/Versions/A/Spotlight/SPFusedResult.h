@class NSMutableArray;

@interface SPFusedResult : SFSearchResult_SpotlightExtras

@property (readonly) NSMutableArray *childResults;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (void)addResult:(id)a0;
- (BOOL)isLocalResult;

@end
