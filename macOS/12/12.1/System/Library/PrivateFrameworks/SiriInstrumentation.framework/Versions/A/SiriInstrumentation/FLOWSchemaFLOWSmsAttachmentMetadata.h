@class NSData, SISchemaUUID;

@interface FLOWSchemaFLOWSmsAttachmentMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char smsAttachmentType : 1; } _has;
}

@property (nonatomic) int smsAttachmentType;
@property (nonatomic) BOOL hasSmsAttachmentType;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
