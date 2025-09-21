@class NSString, NSData;

@interface NETSchemaNETPathInterface : SISchemaInstrumentationMessage {
    struct { unsigned char type : 1; unsigned char index : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) unsigned int index;
@property (nonatomic) char hasIndex;
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
- (void)deleteIndex;
- (void)deleteName;
- (id)suppressMessageUnderConditions;

@end
