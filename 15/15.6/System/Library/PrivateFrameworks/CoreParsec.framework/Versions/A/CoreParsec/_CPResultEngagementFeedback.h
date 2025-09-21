@class NSString, _CPSearchResultForFeedback, NSData;

@interface _CPResultEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPResultEngagementFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char actionEngaged;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int destination;
@property (nonatomic) int actionTarget;
@property (retain, nonatomic) _CPSearchResultForFeedback *result;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) char matchesUnengagedSuggestion;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithFacade:(id)a0;

@end
