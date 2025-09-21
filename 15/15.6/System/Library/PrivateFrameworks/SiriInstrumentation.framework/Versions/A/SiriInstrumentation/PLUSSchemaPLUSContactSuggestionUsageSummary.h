@class NSData;

@interface PLUSSchemaPLUSContactSuggestionUsageSummary : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionGenerationTimeSince1970InMs : 1; unsigned char timeUntilFirstActivationInMs : 1; unsigned char averageTimeBetweenActivationsInMs : 1; unsigned char activationCount : 1; unsigned char presentationCount : 1; unsigned char confirmationSelectedCount : 1; unsigned char disambiguationSelectedCount : 1; unsigned char abandonmentCount : 1; unsigned char domain : 1; } _has;
}

@property (nonatomic) unsigned long long suggestionGenerationTimeSince1970InMs;
@property (nonatomic) char hasSuggestionGenerationTimeSince1970InMs;
@property (nonatomic) unsigned long long timeUntilFirstActivationInMs;
@property (nonatomic) char hasTimeUntilFirstActivationInMs;
@property (nonatomic) unsigned long long averageTimeBetweenActivationsInMs;
@property (nonatomic) char hasAverageTimeBetweenActivationsInMs;
@property (nonatomic) unsigned int activationCount;
@property (nonatomic) char hasActivationCount;
@property (nonatomic) unsigned int presentationCount;
@property (nonatomic) char hasPresentationCount;
@property (nonatomic) unsigned int confirmationSelectedCount;
@property (nonatomic) char hasConfirmationSelectedCount;
@property (nonatomic) unsigned int disambiguationSelectedCount;
@property (nonatomic) char hasDisambiguationSelectedCount;
@property (nonatomic) unsigned int abandonmentCount;
@property (nonatomic) char hasAbandonmentCount;
@property (nonatomic) int domain;
@property (nonatomic) char hasDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfirmationSelectedCount;
- (void)deleteAbandonmentCount;
- (void)deleteActivationCount;
- (void)deleteAverageTimeBetweenActivationsInMs;
- (void)deleteDisambiguationSelectedCount;
- (void)deleteDomain;
- (void)deletePresentationCount;
- (void)deleteSuggestionGenerationTimeSince1970InMs;
- (void)deleteTimeUntilFirstActivationInMs;
- (id)suppressMessageUnderConditions;

@end
