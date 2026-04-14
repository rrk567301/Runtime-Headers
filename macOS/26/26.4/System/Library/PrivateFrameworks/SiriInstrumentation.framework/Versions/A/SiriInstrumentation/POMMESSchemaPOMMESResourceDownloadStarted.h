@class NSData;

@interface POMMESSchemaPOMMESResourceDownloadStarted : SISchemaInstrumentationMessage {
    struct { unsigned char resourceType : 1; } _has;
}

@property (nonatomic) int resourceType;
@property (nonatomic) BOOL hasResourceType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteResourceType;

@end
