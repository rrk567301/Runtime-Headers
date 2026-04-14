@class NSString, NSData;

@interface CAMSchemaCAMResponse : SISchemaInstrumentationMessage {
    struct { unsigned char action : 1; unsigned char responseStatusCode : 1; } _has;
}

@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) unsigned int responseStatusCode;
@property (nonatomic) BOOL hasResponseStatusCode;
@property (copy, nonatomic) NSString *enforcer;
@property (nonatomic) BOOL hasEnforcer;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAction;
- (id)suppressMessageUnderConditions;
- (void)deleteResponseStatusCode;
- (void)deleteEnforcer;

@end
