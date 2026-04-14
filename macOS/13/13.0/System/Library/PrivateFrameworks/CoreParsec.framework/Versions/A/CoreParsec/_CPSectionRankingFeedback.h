@class NSString, NSArray, _CPResultSectionForFeedback, NSData;

@interface _CPSectionRankingFeedback : PBCodable <_CPProcessableFeedback, _CPSectionRankingFeedback, NSSecureCoding> {
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
@property (retain, nonatomic) _CPResultSectionForFeedback *section;
@property (nonatomic) unsigned int localSectionPosition;
@property (nonatomic) double personalizationScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)resultsCount;
- (void)addResults:(id)a0;
- (void)clearResults;
- (id)initWithFacade:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;

@end
