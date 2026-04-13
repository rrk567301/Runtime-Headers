@class NSData;

@interface MTSchemaProvisionalMTBatchRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfParagraphs : 1; } _has;
}

@property (nonatomic) unsigned int numberOfParagraphs;
@property (nonatomic) BOOL hasNumberOfParagraphs;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
