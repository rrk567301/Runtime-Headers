@class NSString, NSData;

@interface USOSchemaUSOEntityIdentifierTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char index : 1; } _has;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) char hasIndex;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) char hasValue;
@property (copy, nonatomic) NSString *backingAppBundleId;
@property (nonatomic) char hasBackingAppBundleId;
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
- (void)deleteBackingAppBundleId;
- (void)deleteIndex;
- (void)deleteValue;
- (id)suppressMessageUnderConditions;

@end
