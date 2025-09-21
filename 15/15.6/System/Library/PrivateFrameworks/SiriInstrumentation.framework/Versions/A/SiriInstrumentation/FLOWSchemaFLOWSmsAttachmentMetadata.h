@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWSmsAttachmentMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char smsAttachmentType : 1; } _has;
}

@property (nonatomic) int smsAttachmentType;
@property (nonatomic) char hasSmsAttachmentType;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
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
- (void)deleteLinkId;
- (void)deleteSmsAttachmentType;
- (id)suppressMessageUnderConditions;

@end
