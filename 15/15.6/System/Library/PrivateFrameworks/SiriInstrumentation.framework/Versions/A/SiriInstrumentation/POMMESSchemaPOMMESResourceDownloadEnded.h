@class NSData;

@interface POMMESSchemaPOMMESResourceDownloadEnded : SISchemaInstrumentationMessage {
    struct { unsigned char resourceDownloadSizeInBytes : 1; } _has;
}

@property (nonatomic) unsigned int resourceDownloadSizeInBytes;
@property (nonatomic) char hasResourceDownloadSizeInBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteResourceDownloadSizeInBytes;
- (id)suppressMessageUnderConditions;

@end
