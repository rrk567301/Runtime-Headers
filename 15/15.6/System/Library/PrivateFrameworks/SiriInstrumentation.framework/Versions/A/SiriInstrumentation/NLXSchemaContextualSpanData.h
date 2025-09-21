@class NSData;

@interface NLXSchemaContextualSpanData : SISchemaInstrumentationMessage {
    struct { unsigned char isSurroundingTextMatched : 1; } _has;
}

@property (nonatomic) char isSurroundingTextMatched;
@property (nonatomic) char hasIsSurroundingTextMatched;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSurroundingTextMatched;
- (id)suppressMessageUnderConditions;

@end
