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

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCompatibilityVersion;
- (void)deleteFactorPackId;
- (void)deleteName;

@end
