@class NSString, NSData;

@interface POMMESSchemaPOMMESOnDeviceMetadata : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *onScreenAppBundleIdDomain;
@property (nonatomic) BOOL hasOnScreenAppBundleIdDomain;
@property (copy, nonatomic) NSString *onScreenUriDomain;
@property (nonatomic) BOOL hasOnScreenUriDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteOnScreenAppBundleIdDomain;
- (void)deleteOnScreenUriDomain;

@end
