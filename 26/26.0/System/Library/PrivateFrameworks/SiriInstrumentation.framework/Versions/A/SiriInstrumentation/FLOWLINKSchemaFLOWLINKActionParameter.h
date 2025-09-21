@class NSString, NSData;

@interface FLOWLINKSchemaFLOWLINKActionParameter : SISchemaInstrumentationMessage {
    struct { unsigned char isArray : 1; unsigned char type : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL isArray;
@property (nonatomic) BOOL hasIsArray;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteIsArray;
- (void)deleteName;

@end
