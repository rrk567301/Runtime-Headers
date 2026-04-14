@class NSString, NSArray, _CPSearchResultForFeedback, NSData;

@interface _CPVisibleResultsFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleResultsFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSArray *results;
@property (nonatomic) int triggerEvent;
@property (retain, nonatomic) _CPSearchResultForFeedback *goTakeoverResult;
@property (copy, nonatomic) NSArray *uniqueIdsOfVisibleButtons;
@property (copy, nonatomic) NSArray *uniqueIdentifiersOfVisibleCardSections;
@property (nonatomic) BOOL isFilterBarShown;
@property (nonatomic) int inputToResultShownMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)clearUniqueIdentifiersOfVisibleCardSections;
- (id)initWithFacade:(id)a0;
- (unsigned long long)uniqueIdsOfVisibleButtonsCount;
- (id)init;
- (void)addResults:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (unsigned long long)uniqueIdsOfVisibleButtonsAtIndex:(unsigned long long)a0;
- (void)clearResults;
- (void).cxx_destruct;
- (unsigned long long)resultsCount;
- (void)addUniqueIdentifiersOfVisibleCardSections:(id)a0;
- (unsigned long long)uniqueIdentifiersOfVisibleCardSectionsCount;
- (BOOL)isEqual:(id)a0;
- (void)addUniqueIdsOfVisibleButtons:(unsigned long long)a0;
- (void)clearUniqueIdsOfVisibleButtons;
- (id)uniqueIdentifiersOfVisibleCardSectionsAtIndex:(unsigned long long)a0;

@end
