@class NSData;

@interface NLXSchemaSSUBackgroundUpdateStarted : SISchemaInstrumentationMessage {
    struct { unsigned char backgroundUpdateType : 1; } _has;
}

@property (nonatomic) int backgroundUpdateType;
@property (nonatomic) BOOL hasBackgroundUpdateType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteBackgroundUpdateType;

@end
