@class _CPCardSectionForFeedback, NSString, _CPPunchoutForFeedback, NSData;

@interface _CPCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPCardSectionEngagementFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) _CPPunchoutForFeedback *destination;
@property (nonatomic) int triggerEvent;
@property (nonatomic) int actionCardType;
@property (retain, nonatomic) _CPCardSectionForFeedback *cardSection;
@property (nonatomic) char destinationWasPARPunchout;
@property (copy, nonatomic) NSString *parPunchoutActionTarget;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic) int actionTarget;
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
