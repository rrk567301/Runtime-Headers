@class NSString, NSArray, NSData;

@interface _CPRankingFeedback : PBCodable <_CPProcessableFeedback, _CPRankingFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) double blendingDuration;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSArray *hiddenResults;
@property (nonatomic) int spotlightQueryIntent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)hiddenResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionsCount;
- (id)initWithFacade:(id)a0;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void)clearSections;
- (unsigned long long)hiddenResultsCount;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void)addSections:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearHiddenResults;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addHiddenResults:(id)a0;

@end
