@class NSString, NSArray, NSData;

@interface USOSchemaUSONodeDataTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; unsigned char integerPayload : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) char hasIndex;
@property (copy, nonatomic) NSString *stringPayload;
@property (nonatomic) char hasStringPayload;
@property (nonatomic) int integerPayload;
@property (nonatomic) char hasIntegerPayload;
@property (copy, nonatomic) NSArray *normalizedStringPayloads;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addNormalizedStringPayloads:(id)a0;
- (void)clearNormalizedStringPayloads;
- (void)deleteIndex;
- (void)deleteIntegerPayload;
- (void)deleteNormalizedStringPayloads;
- (void)deleteStringPayload;
- (id)normalizedStringPayloadsAtIndex:(unsigned long long)a0;
- (unsigned long long)normalizedStringPayloadsCount;
- (id)suppressMessageUnderConditions;

@end
