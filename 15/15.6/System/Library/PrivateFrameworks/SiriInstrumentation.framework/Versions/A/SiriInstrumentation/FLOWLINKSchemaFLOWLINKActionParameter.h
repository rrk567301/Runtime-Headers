@class NSString, NSData;

@interface FLOWLINKSchemaFLOWLINKActionParameter : SISchemaInstrumentationMessage {
    struct { unsigned char isArray : 1; unsigned char type : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) char isArray;
@property (nonatomic) char hasIsArray;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteType;
- (void)deleteIsArray;
- (void)deleteName;
- (id)suppressMessageUnderConditions;

@end
