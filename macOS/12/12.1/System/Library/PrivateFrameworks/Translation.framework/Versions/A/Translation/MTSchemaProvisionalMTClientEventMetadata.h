@class NSString, NSData, SISchemaUUID;

@interface MTSchemaProvisionalMTClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *mtId;
@property (nonatomic) BOOL hasMtId;
@property (retain, nonatomic) SISchemaUUID *sessionId;
@property (nonatomic) BOOL hasSessionId;
@property (copy, nonatomic) NSString *clientAppBundleId;
@property (nonatomic) BOOL hasClientAppBundleId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
