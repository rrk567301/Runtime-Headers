@class NSString, NSData;

@interface NETSchemaNETNetworkInterface : SISchemaInstrumentationMessage {
    struct { unsigned char connectionType : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) int connectionType;
@property (nonatomic) char hasConnectionType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConnectionType;
- (void)deleteName;
- (id)suppressMessageUnderConditions;

@end
