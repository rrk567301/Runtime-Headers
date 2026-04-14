@class NSString, NSData;

@interface NETSchemaNETPathInterface : SISchemaInstrumentationMessage {
    struct { unsigned char type : 1; unsigned char index : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteType;
- (void)deleteIndex;
- (void)deleteName;

@end
