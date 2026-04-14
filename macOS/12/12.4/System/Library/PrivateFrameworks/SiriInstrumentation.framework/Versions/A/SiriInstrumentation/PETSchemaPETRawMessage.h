@class NSData, NSString;

@interface PETSchemaPETRawMessage : SISchemaInstrumentationMessage {
    struct { unsigned char type_id : 1; } _has;
}

@property (nonatomic) unsigned int type_id;
@property (nonatomic) BOOL hasType_id;
@property (copy, nonatomic) NSData *raw_bytes;
@property (nonatomic) BOOL hasRaw_bytes;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteName;
- (void)deleteType_id;
- (void)deleteRaw_bytes;
- (id)suppressMessageUnderConditions;

@end
