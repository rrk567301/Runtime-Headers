@class NSString, NSData;

@interface MTSchemaMTBatchRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char numParagraphs : 1; } _has;
}

@property (nonatomic) unsigned int numParagraphs;
@property (nonatomic) BOOL hasNumParagraphs;
@property (copy, nonatomic) NSString *sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteNumParagraphs;
- (void)deleteSequenceNumber;

@end
