@class NSDictionary;

@interface SearchToolQUSignals : NSObject

@property (nonatomic) unsigned long long llmQUIntentType;
@property (nonatomic) unsigned long long inferredLlmQUIntentType;
@property (nonatomic) BOOL isSingle;
@property (nonatomic) BOOL isPlural;
@property (nonatomic) BOOL isCardEventSearch;
@property (retain, nonatomic) NSDictionary *signalsPerTool;

- (void).cxx_destruct;
- (id)getSignalsPerTool:(unsigned long long)a0;

@end
