@class NSString, NSArray;

@interface PhotosGraph.PGUpNextDebugInfoBuilder : NSObject {
    void /* function */ inputDebugInfo;
    void /* function */ rootMemoryNodeUniqueIdentifier;
    void /* function */ momentUUIDs;
    void /* function */ featureWeightVectors;
    void /* unknown type, empty encoding */ suggestionFilteringLogs;
}

@property (nonatomic) BOOL wantsVerboseDebugInfo;
@property (nonatomic, copy) NSString *inputDebugInfo;
@property (nonatomic) BOOL rootMemoryIsAggregation;
@property (nonatomic, copy) NSString *rootMemoryNodeUniqueIdentifier;
@property (nonatomic, copy) NSArray *momentUUIDs;
@property (nonatomic, copy) NSArray *featureWeightVectors;
@property (nonatomic, readonly) NSString *debugInfo;

- (id)init;
- (void).cxx_destruct;
- (void)addSuggestionFilteringLog:(id)a0;

@end
