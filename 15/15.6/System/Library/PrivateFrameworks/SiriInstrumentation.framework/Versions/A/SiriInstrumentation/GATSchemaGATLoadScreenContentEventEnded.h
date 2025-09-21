@class NSData;

@interface GATSchemaGATLoadScreenContentEventEnded : SISchemaInstrumentationMessage {
    struct { unsigned char originalMediaType : 1; unsigned char originalMediaSizeInKBs : 1; } _has;
}

@property (nonatomic) int originalMediaType;
@property (nonatomic) char hasOriginalMediaType;
@property (nonatomic) double originalMediaSizeInKBs;
@property (nonatomic) char hasOriginalMediaSizeInKBs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOriginalMediaSizeInKBs;
- (void)deleteOriginalMediaType;
- (id)suppressMessageUnderConditions;

@end
