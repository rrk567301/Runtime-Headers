@class NSData;

@interface INFERENCESchemaINFERENCEContactQueryMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hasName : 1; unsigned char hasRelationship : 1; unsigned char hasHandleLabel : 1; unsigned char hasHandleValue : 1; unsigned char hasMeReference : 1; unsigned char hasContactId : 1; unsigned char isEmergencyQuery : 1; } _has;
}

@property (nonatomic) char hasName;
@property (nonatomic) char hasHasName;
@property (nonatomic) char hasRelationship;
@property (nonatomic) char hasHasRelationship;
@property (nonatomic) char hasHandleLabel;
@property (nonatomic) char hasHasHandleLabel;
@property (nonatomic) char hasHandleValue;
@property (nonatomic) char hasHasHandleValue;
@property (nonatomic) char hasMeReference;
@property (nonatomic) char hasHasMeReference;
@property (nonatomic) char hasContactId;
@property (nonatomic) char hasHasContactId;
@property (nonatomic) char isEmergencyQuery;
@property (nonatomic) char hasIsEmergencyQuery;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasContactId;
- (void)deleteHasHandleLabel;
- (void)deleteHasHandleValue;
- (void)deleteHasMeReference;
- (void)deleteHasName;
- (void)deleteHasRelationship;
- (void)deleteIsEmergencyQuery;
- (id)suppressMessageUnderConditions;

@end
