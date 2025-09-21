@class NSData;

@interface USOSchemaUSOPayloadAttachmentInfo : SISchemaInstrumentationMessage {
    struct { unsigned char attachmentType : 1; } _has;
}

@property (nonatomic) int attachmentType;
@property (nonatomic) char hasAttachmentType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAttachmentType;
- (id)suppressMessageUnderConditions;

@end
