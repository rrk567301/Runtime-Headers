@class NSData;

@interface USOSchemaUSOPayloadAttachmentInfo : SISchemaInstrumentationMessage {
    struct { unsigned char attachmentType : 1; } _has;
}

@property (nonatomic) int attachmentType;
@property (nonatomic) BOOL hasAttachmentType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteAttachmentType;

@end
