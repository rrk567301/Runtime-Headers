@class NSString, NSData;

@interface NETSchemaNETNetworkInterface : SISchemaInstrumentationMessage {
    struct { unsigned char connectionType : 1; } _has;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int connectionType;
@property (nonatomic) BOOL hasConnectionType;
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
- (void)deleteConnectionType;
- (void)deleteName;

@end
