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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsArray;
- (void)deleteName;

@end
