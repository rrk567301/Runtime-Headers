@class NSData;

@interface NLXSchemaSSUBackgroundUpdateStarted : SISchemaInstrumentationMessage {
    struct { unsigned char backgroundUpdateType : 1; } _has;
}

@property (nonatomic) int backgroundUpdateType;
@property (nonatomic) BOOL hasBackgroundUpdateType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteBackgroundUpdateType;

@end
