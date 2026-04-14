@class NSString, PeopleSuggesterFeatureDouble;

@interface PeopleSuggesterCandidate : PBCodable <NSCopying> {
    struct { unsigned char coreMLModelScore : 1; unsigned char deprecatedField1 : 1; unsigned char deprecatedField2 : 1; unsigned char deprecatedField3 : 1; unsigned char feedbackDeprecated : 1; unsigned char foundInChunk : 1; unsigned char suggestedRank : 1; unsigned char updatedInChunk : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPrivatizedIdentifier;
@property (retain, nonatomic) NSString *privatizedIdentifier;
@property (nonatomic) BOOL hasFeedbackDeprecated;
@property (nonatomic) int feedbackDeprecated;
@property (readonly, nonatomic) BOOL hasPrivatizedTransportBundleId;
@property (retain, nonatomic) NSString *privatizedTransportBundleId;
@property (readonly, nonatomic) BOOL hasTimeSinceLastOutgoingInteraction;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *timeSinceLastOutgoingInteraction;
@property (readonly, nonatomic) BOOL hasTimeSinceOutgoingInteractionNumber10;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *timeSinceOutgoingInteractionNumber10;
@property (readonly, nonatomic) BOOL hasTimeSinceLastIncomingInteraction;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *timeSinceLastIncomingInteraction;
@property (nonatomic) BOOL hasDeprecatedField1;
@property (nonatomic) double deprecatedField1;
@property (nonatomic) BOOL hasDeprecatedField2;
@property (nonatomic) double deprecatedField2;
@property (nonatomic) BOOL hasDeprecatedField3;
@property (nonatomic) double deprecatedField3;
@property (readonly, nonatomic) BOOL hasNumberOfSharesWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfSharesWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfSharesFromCurrentAppWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfSharesFromCurrentAppWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfSharesOfTopDomainURLWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfSharesOfTopDomainURLWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfSharesOfDetectedPeopleWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfSharesOfDetectedPeopleWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfSharesOfPeopleInPhotoWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfSharesOfPeopleInPhotoWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfOutgoingInteractionsWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfOutgoingInteractionsWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfIncomingInteractionsWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfIncomingInteractionsWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfInteractionsDuringTimePeriodWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfInteractionsDuringTimePeriodWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfEngagedSuggestionsWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfEngagedSuggestionsWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfEngagedSuggestionsFromCurrentAppWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfEngagedSuggestionsFromCurrentAppWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfEngagedSuggestionsOfTopDomainURLWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfEngagedSuggestionsOfTopDomainURLWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfEngagedSuggestionsOfDetectedPeopleWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfEngagedSuggestionsOfDetectedPeopleWithConversation;
@property (readonly, nonatomic) BOOL hasNumberOfEngagedSuggestionsOfPeopleInPhotoWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *numberOfEngagedSuggestionsOfPeopleInPhotoWithConversation;
@property (readonly, nonatomic) BOOL hasHasEverSharePlayedWithConversation;
@property (retain, nonatomic) PeopleSuggesterFeatureDouble *hasEverSharePlayedWithConversation;
@property (nonatomic) BOOL hasSuggestedRank;
@property (nonatomic) int suggestedRank;
@property (nonatomic) BOOL hasCoreMLModelScore;
@property (nonatomic) double coreMLModelScore;
@property (nonatomic) BOOL hasFoundInChunk;
@property (nonatomic) int foundInChunk;
@property (nonatomic) BOOL hasUpdatedInChunk;
@property (nonatomic) int updatedInChunk;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedbackDeprecated:(id)a0;
- (id)feedbackDeprecatedAsString:(int)a0;

@end
