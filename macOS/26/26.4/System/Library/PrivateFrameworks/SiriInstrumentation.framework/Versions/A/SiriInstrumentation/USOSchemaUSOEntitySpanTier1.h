@class NSString, NSArray, NSData;

@interface USOSchemaUSOEntitySpanTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (copy, nonatomic) NSString *originAppId;
@property (nonatomic) BOOL hasOriginAppId;
@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSString *originEntityId;
@property (nonatomic) BOOL hasOriginEntityId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)alternativesCount;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearAlternatives;
- (void)clearProperties;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (void)addAlternatives:(id)a0;
- (id)alternativesAtIndex:(unsigned long long)a0;
- (void)deleteAlternatives;
- (void)deleteIndex;
- (void)deleteOriginAppId;
- (void)deleteOriginEntityId;
- (void)deleteProperties;

@end
