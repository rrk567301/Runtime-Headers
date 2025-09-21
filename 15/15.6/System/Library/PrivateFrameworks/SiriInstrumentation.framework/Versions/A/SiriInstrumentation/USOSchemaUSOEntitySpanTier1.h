@class NSString, NSArray, NSData;

@interface USOSchemaUSOEntitySpanTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) char hasIndex;
@property (copy, nonatomic) NSString *originAppId;
@property (nonatomic) char hasOriginAppId;
@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSString *originEntityId;
@property (nonatomic) char hasOriginEntityId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)clearProperties;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (void)addAlternatives:(id)a0;
- (id)alternativesAtIndex:(unsigned long long)a0;
- (unsigned long long)alternativesCount;
- (void)clearAlternatives;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAlternatives;
- (void)deleteIndex;
- (void)deleteOriginAppId;
- (void)deleteOriginEntityId;
- (void)deleteProperties;
- (id)suppressMessageUnderConditions;

@end
