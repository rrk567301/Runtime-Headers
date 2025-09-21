@class NSString, NSData;

@interface MHSchemaMHVoiceProfileConfusionScore : SISchemaInstrumentationMessage {
    struct { unsigned char similarityScore : 1; } _has;
}

@property (copy, nonatomic) NSString *homeMemberUserId;
@property (nonatomic) BOOL hasHomeMemberUserId;
@property (nonatomic) unsigned int similarityScore;
@property (nonatomic) BOOL hasSimilarityScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteHomeMemberUserId;
- (void)deleteSimilarityScore;

@end
