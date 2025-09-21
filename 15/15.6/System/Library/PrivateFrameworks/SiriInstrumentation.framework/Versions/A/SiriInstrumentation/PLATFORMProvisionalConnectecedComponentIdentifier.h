@class NSString, NSData, SISchemaUUID;

@interface PLATFORMProvisionalConnectecedComponentIdentifier : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *uuid;
@property (nonatomic) char hasUuid;
@property (copy, nonatomic) NSString *component;
@property (nonatomic) char hasComponent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteComponent;
- (void)deleteUuid;

@end
