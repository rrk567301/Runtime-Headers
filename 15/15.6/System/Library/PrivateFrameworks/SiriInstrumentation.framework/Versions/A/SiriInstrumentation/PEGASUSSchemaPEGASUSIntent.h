@class NSString, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSIntent : SISchemaInstrumentationMessage {
    struct { unsigned char intentCategory : 1; unsigned char source : 1; unsigned char confidence : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int intentCategory;
@property (nonatomic) char hasIntentCategory;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) int source;
@property (nonatomic) char hasSource;
@property (nonatomic) float confidence;
@property (nonatomic) char hasConfidence;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteConfidence;
- (void)deleteIntentCategory;
- (void)deleteLinkId;
- (void)deleteName;
- (void)deleteSource;
- (id)suppressMessageUnderConditions;

@end
