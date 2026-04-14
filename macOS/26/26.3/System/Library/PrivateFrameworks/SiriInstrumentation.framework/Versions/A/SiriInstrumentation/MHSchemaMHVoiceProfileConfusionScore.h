@class NSString, NSData;

@interface MHSchemaMHVoiceProfileConfusionScore : SISchemaInstrumentationMessage {
    struct { unsigned char similarityScore : 1; } _has;
}

@property (copy, nonatomic) NSString *homeMemberUserId;
@property (nonatomic) BOOL hasHomeMemberUserId;
@property (nonatomic) unsigned int similarityScore;
@property (nonatomic) BOOL hasSimilarityScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteHomeMemberUserId;
- (void)deleteSimilarityScore;

@end
