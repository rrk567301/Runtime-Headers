@class NSString, _CPIndexStateForFeedback, NSData, _CPPerformEntityQueryCommandForFeedback;

@interface _CPStartLocalSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPStartLocalSearchFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSString *input;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) int triggerEvent;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) int indexType;
@property (nonatomic) int searchType;
@property (copy, nonatomic) NSString *originatingApp;
@property (retain, nonatomic) _CPPerformEntityQueryCommandForFeedback *entityQueryCommand;
@property (retain, nonatomic) _CPIndexStateForFeedback *indexState;
@property (nonatomic) int coreSpotlightIndexTypeUsed;
@property (nonatomic) char isPhotosScopedSearch;
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
