@class NSString;

@interface IntelligenceFlowShared.QueryDecorationOutput : NSObject {
    void /* unknown type, empty encoding */ spans;
    void /* unknown type, empty encoding */ requiredContext;
    void /* unknown type, empty encoding */ utteranceContext;
    void /* unknown type, empty encoding */ originalRankedTools;
    void /* unknown type, empty encoding */ adjustedRankedTools;
    void /* unknown type, empty encoding */ originalRankedSpans;
    void /* unknown type, empty encoding */ adjustedRankedSpans;
    void /* unknown type, empty encoding */ originalRankedUtteranceContext;
    void /* unknown type, empty encoding */ adjustedRankedUtteranceContext;
    void /* unknown type, empty encoding */ queryDecorationToolRetrievalResponse;
    void /* unknown type, empty encoding */ dynamicEnumerationEntities;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
