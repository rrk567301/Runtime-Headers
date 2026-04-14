@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWSmsAttachmentMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char smsAttachmentType : 1; } _has;
}

@property (nonatomic) int smsAttachmentType;
@property (nonatomic) BOOL hasSmsAttachmentType;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLinkId;
- (void)deleteSmsAttachmentType;

@end
