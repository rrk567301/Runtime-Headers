@class GATSchemaGATTextMetadata, NSString, NSData, GATSchemaGATImageMetadata, GATSchemaGATFileMetadata;

@interface GATSchemaGATRichFormatResponseSegment : SISchemaInstrumentationMessage {
    struct { unsigned char mediaType : 1; } _has;
}

@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (retain, nonatomic) GATSchemaGATImageMetadata *image;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) GATSchemaGATFileMetadata *file;
@property (nonatomic) BOOL hasFile;
@property (retain, nonatomic) GATSchemaGATTextMetadata *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) BOOL hasMimeType;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPayload;

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
- (void)deleteText;
- (void)deleteMediaType;
- (void)deleteFile;
- (void)deleteImage;
- (void)deleteMimeType;

@end
