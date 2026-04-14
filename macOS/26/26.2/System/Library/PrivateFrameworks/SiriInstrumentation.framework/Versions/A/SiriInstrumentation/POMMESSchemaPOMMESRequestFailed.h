@class NSData;

@interface POMMESSchemaPOMMESRequestFailed : SISchemaInstrumentationMessage {
    struct { unsigned char reason : 1; unsigned char pommesSearchReason : 1; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned int pommesSearchReason;
@property (nonatomic) BOOL hasPommesSearchReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteReason;
- (void)deletePommesSearchReason;

@end
