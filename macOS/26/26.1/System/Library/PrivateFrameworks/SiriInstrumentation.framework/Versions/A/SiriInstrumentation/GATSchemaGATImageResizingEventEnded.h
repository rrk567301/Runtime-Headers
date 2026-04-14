@class NSData;

@interface GATSchemaGATImageResizingEventEnded : SISchemaInstrumentationMessage {
    struct { unsigned char processedMediaType : 1; unsigned char processedMediaSizeInKBs : 1; } _has;
}

@property (nonatomic) int processedMediaType;
@property (nonatomic) BOOL hasProcessedMediaType;
@property (nonatomic) double processedMediaSizeInKBs;
@property (nonatomic) BOOL hasProcessedMediaSizeInKBs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteProcessedMediaSizeInKBs;
- (void)deleteProcessedMediaType;

@end
