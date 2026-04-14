@class NSData;

@interface USOSchemaUSOPayloadAttachmentInfo : SISchemaInstrumentationMessage {
    struct { unsigned char attachmentType : 1; } _has;
}

@property (nonatomic) int attachmentType;
@property (nonatomic) BOOL hasAttachmentType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAttachmentType;

@end
