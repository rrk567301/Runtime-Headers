@class NSString, NSData;

@interface POMMESSchemaPOMMESOnDeviceMetadata : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *onScreenAppBundleIdDomain;
@property (nonatomic) char hasOnScreenAppBundleIdDomain;
@property (copy, nonatomic) NSString *onScreenUriDomain;
@property (nonatomic) char hasOnScreenUriDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOnScreenAppBundleIdDomain;
- (void)deleteOnScreenUriDomain;
- (id)suppressMessageUnderConditions;

@end
