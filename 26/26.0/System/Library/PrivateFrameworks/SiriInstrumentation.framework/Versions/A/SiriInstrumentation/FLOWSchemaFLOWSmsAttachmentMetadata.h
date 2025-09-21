@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWSmsAttachmentMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char smsAttachmentType : 1; } _has;
}

@property (nonatomic) int smsAttachmentType;
@property (nonatomic) BOOL hasSmsAttachmentType;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteLinkId;
- (void)deleteSmsAttachmentType;

@end
