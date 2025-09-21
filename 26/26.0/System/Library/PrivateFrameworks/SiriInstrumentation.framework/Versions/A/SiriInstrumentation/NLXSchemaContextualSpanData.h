@class NSData;

@interface NLXSchemaContextualSpanData : SISchemaInstrumentationMessage {
    struct { unsigned char isSurroundingTextMatched : 1; } _has;
}

@property (nonatomic) BOOL isSurroundingTextMatched;
@property (nonatomic) BOOL hasIsSurroundingTextMatched;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsSurroundingTextMatched;

@end
