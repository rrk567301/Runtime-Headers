@class NSData;

@interface INFERENCESchemaINFERENCEPotentialRetryContactInteractionContext : SISchemaInstrumentationMessage {
    struct { unsigned char isExactMatchPriorSiriContactGivenName : 1; unsigned char isExactMatchPriorSiriContactFamilyName : 1; unsigned char isExactMatchPriorSiriContactDisplayName : 1; unsigned char isExactMatchPriorSiriContactId : 1; unsigned char isExactMatchPriorSiriContactHandleValue : 1; unsigned char interactionDurationInSecBucket : 1; unsigned char potentialRetryIntervalInSecBucket : 1; } _has;
}

@property (nonatomic) char isExactMatchPriorSiriContactGivenName;
@property (nonatomic) char hasIsExactMatchPriorSiriContactGivenName;
@property (nonatomic) char isExactMatchPriorSiriContactFamilyName;
@property (nonatomic) char hasIsExactMatchPriorSiriContactFamilyName;
@property (nonatomic) char isExactMatchPriorSiriContactDisplayName;
@property (nonatomic) char hasIsExactMatchPriorSiriContactDisplayName;
@property (nonatomic) char isExactMatchPriorSiriContactId;
@property (nonatomic) char hasIsExactMatchPriorSiriContactId;
@property (nonatomic) char isExactMatchPriorSiriContactHandleValue;
@property (nonatomic) char hasIsExactMatchPriorSiriContactHandleValue;
@property (nonatomic) unsigned int interactionDurationInSecBucket;
@property (nonatomic) char hasInteractionDurationInSecBucket;
@property (nonatomic) unsigned int potentialRetryIntervalInSecBucket;
@property (nonatomic) char hasPotentialRetryIntervalInSecBucket;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteInteractionDurationInSecBucket;
- (void)deleteIsExactMatchPriorSiriContactDisplayName;
- (void)deleteIsExactMatchPriorSiriContactFamilyName;
- (void)deleteIsExactMatchPriorSiriContactGivenName;
- (void)deleteIsExactMatchPriorSiriContactHandleValue;
- (void)deleteIsExactMatchPriorSiriContactId;
- (void)deletePotentialRetryIntervalInSecBucket;
- (id)suppressMessageUnderConditions;

@end
