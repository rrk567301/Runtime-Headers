@class NSString, NSData;

@interface MHSchemaMHVoiceProfileConfusionScore : SISchemaInstrumentationMessage {
    struct { unsigned char similarityScore : 1; } _has;
}

@property (copy, nonatomic) NSString *homeMemberUserId;
@property (nonatomic) char hasHomeMemberUserId;
@property (nonatomic) unsigned int similarityScore;
@property (nonatomic) char hasSimilarityScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHomeMemberUserId;
- (void)deleteSimilarityScore;
- (id)suppressMessageUnderConditions;

@end
