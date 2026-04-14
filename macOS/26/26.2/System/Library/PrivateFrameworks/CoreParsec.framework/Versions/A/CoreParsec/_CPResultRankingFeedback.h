@class NSString, NSArray, _CPSearchResultForFeedback, NSData;

@interface _CPResultRankingFeedback : PBCodable <_CPProcessableFeedback, _CPResultRankingFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSArray *hiddenResults;
@property (copy, nonatomic) NSArray *duplicateResults;
@property (nonatomic) unsigned int localResultPosition;
@property (nonatomic) double personalizationScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (unsigned long long)duplicateResultsCount;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)duplicateResultsAtIndex:(unsigned long long)a0;
- (void)addDuplicateResults:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)clearHiddenResults;
- (void)clearDuplicateResults;
- (unsigned long long)hiddenResultsCount;
- (void)addHiddenResults:(id)a0;
- (id)init;
- (id)hiddenResultsAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;

@end
