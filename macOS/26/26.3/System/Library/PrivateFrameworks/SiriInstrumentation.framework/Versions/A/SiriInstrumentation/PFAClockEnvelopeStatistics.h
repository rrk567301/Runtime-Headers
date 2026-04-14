@class NSData;

@interface PFAClockEnvelopeStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char messageCount : 1; unsigned char totalBytes : 1; } _has;
}

@property (nonatomic) unsigned int messageCount;
@property (nonatomic) BOOL hasMessageCount;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) BOOL hasTotalBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteMessageCount;
- (void)deleteTotalBytes;

@end
