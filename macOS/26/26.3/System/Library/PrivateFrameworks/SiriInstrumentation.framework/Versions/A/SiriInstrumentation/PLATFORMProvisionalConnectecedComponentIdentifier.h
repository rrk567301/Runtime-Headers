@class NSString, NSData, SISchemaUUID;

@interface PLATFORMProvisionalConnectecedComponentIdentifier : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *uuid;
@property (nonatomic) BOOL hasUuid;
@property (copy, nonatomic) NSString *component;
@property (nonatomic) BOOL hasComponent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteComponent;
- (void)deleteUuid;

@end
