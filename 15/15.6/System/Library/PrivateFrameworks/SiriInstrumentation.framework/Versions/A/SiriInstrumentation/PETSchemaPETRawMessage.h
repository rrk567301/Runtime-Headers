@class NSData, NSString;

@interface PETSchemaPETRawMessage : SISchemaInstrumentationMessage {
    struct { unsigned char type_id : 1; } _has;
}

@property (nonatomic) unsigned int type_id;
@property (nonatomic) char hasType_id;
@property (copy, nonatomic) NSData *raw_bytes;
@property (nonatomic) char hasRaw_bytes;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRaw_bytes;
- (void)deleteName;
- (void)deleteType_id;
- (id)suppressMessageUnderConditions;

@end
