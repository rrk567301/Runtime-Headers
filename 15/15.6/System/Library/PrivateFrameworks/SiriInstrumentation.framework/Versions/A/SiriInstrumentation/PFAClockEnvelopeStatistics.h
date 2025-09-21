@class NSData;

@interface PFAClockEnvelopeStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char messageCount : 1; unsigned char totalBytes : 1; } _has;
}

@property (nonatomic) unsigned int messageCount;
@property (nonatomic) char hasMessageCount;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) char hasTotalBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMessageCount;
- (void)deleteTotalBytes;
- (id)suppressMessageUnderConditions;

@end
