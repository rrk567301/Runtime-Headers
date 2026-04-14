@class NSString, NSData;

@interface USOSchemaUSOEntityIdentifierTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSString *backingAppBundleId;
@property (nonatomic) BOOL hasBackingAppBundleId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteValue;
- (void)deleteIndex;
- (void)deleteBackingAppBundleId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
