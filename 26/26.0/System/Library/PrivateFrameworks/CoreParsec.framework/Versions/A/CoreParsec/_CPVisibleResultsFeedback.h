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
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (unsigned long long)resultsCount;
- (id)initWithFacade:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)clearUniqueIdsOfVisibleButtons;
- (void)addResults:(id)a0;
- (unsigned long long)uniqueIdsOfVisibleButtonsAtIndex:(unsigned long long)a0;
- (void)clearResults;
- (unsigned long long)uniqueIdentifiersOfVisibleCardSectionsCount;
- (unsigned long long)uniqueIdsOfVisibleButtonsCount;
- (void)clearUniqueIdentifiersOfVisibleCardSections;
- (id)uniqueIdentifiersOfVisibleCardSectionsAtIndex:(unsigned long long)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addUniqueIdentifiersOfVisibleCardSections:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addUniqueIdsOfVisibleButtons:(unsigned long long)a0;

@end
