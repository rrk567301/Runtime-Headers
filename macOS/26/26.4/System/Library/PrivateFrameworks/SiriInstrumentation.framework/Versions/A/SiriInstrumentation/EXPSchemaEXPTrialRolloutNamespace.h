@class NSString, NSData;

@interface EXPSchemaEXPTrialRolloutNamespace : SISchemaInstrumentationMessage {
    struct { unsigned char compatibilityVersion : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCompatibilityVersion;
- (void)deleteFactorPackId;
- (void)deleteName;

@end
