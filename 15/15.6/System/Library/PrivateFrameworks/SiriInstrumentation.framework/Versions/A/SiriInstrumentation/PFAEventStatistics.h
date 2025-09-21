@class NSData;

@interface PFAEventStatistics : SISchemaInstrumentationMessage {
    struct { unsigned char ordinal : 1; unsigned char messageCount : 1; } _has;
}

@property (nonatomic) unsigned int ordinal;
@property (nonatomic) char hasOrdinal;
@property (nonatomic) unsigned int messageCount;
@property (nonatomic) char hasMessageCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMessageCount;
- (void)deleteOrdinal;
- (id)suppressMessageUnderConditions;

@end
