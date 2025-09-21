@class NSString, NSData;

@interface RGSiriSchemaRGOverrideStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (copy, nonatomic) NSString *overridesMobileAssetVersion;
@property (nonatomic) char hasOverridesMobileAssetVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (void)deleteOverridesMobileAssetVersion;
- (id)suppressMessageUnderConditions;

@end
