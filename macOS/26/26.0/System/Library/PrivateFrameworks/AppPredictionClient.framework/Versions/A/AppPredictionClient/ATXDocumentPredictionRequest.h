@class NSMutableDictionary;

@interface ATXDocumentPredictionRequest : ATXPredictionRequest

@property (retain, nonatomic) NSMutableDictionary *categoryWithLimit;

- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)a0 documentScope:(id)a1;
- (void)setLimit:(unsigned long long)a0 forCategory:(unsigned long long)a1;

@end
