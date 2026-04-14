@class NSString, NSArray, NSData;

@interface _CPResultsReceivedAfterTimeoutFeedback : PBCodable <_CPProcessableFeedback, _CPResultsReceivedAfterTimeoutFeedback, NSSecureCoding> {
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
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)init;
- (void)addResults:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)resultsAtIndex:(unsigned long long)a0;
- (void)clearResults;
- (void).cxx_destruct;
- (unsigned long long)resultsCount;
- (BOOL)isEqual:(id)a0;

@end
