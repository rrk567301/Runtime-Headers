@class NSData;

@interface GATSchemaGATImageResizingEventEnded : SISchemaInstrumentationMessage {
    struct { unsigned char processedMediaType : 1; unsigned char processedMediaSizeInKBs : 1; } _has;
}

@property (nonatomic) int processedMediaType;
@property (nonatomic) char hasProcessedMediaType;
@property (nonatomic) double processedMediaSizeInKBs;
@property (nonatomic) char hasProcessedMediaSizeInKBs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteProcessedMediaSizeInKBs;
- (void)deleteProcessedMediaType;
- (id)suppressMessageUnderConditions;

@end
