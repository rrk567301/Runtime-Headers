@class NSString, NSData;

@interface MTSchemaMTBatchRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char numParagraphs : 1; } _has;
}

@property (nonatomic) unsigned int numParagraphs;
@property (nonatomic) BOOL hasNumParagraphs;
@property (copy, nonatomic) NSString *sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumParagraphs;
- (void)deleteSequenceNumber;

@end
