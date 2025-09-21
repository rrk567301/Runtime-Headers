@class NSString, NSData;

@interface EXPSchemaEXPTrialRolloutNamespace : SISchemaInstrumentationMessage {
    struct { unsigned char compatibilityVersion : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) char hasCompatibilityVersion;
@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) char hasFactorPackId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCompatibilityVersion;
- (void)deleteFactorPackId;
- (void)deleteName;
- (id)suppressMessageUnderConditions;

@end
