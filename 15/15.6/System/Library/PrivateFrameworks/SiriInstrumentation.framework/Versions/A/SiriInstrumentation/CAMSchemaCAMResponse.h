@class NSString, NSData;

@interface CAMSchemaCAMResponse : SISchemaInstrumentationMessage {
    struct { unsigned char action : 1; unsigned char responseStatusCode : 1; } _has;
}

@property (nonatomic) int action;
@property (nonatomic) char hasAction;
@property (nonatomic) unsigned int responseStatusCode;
@property (nonatomic) char hasResponseStatusCode;
@property (copy, nonatomic) NSString *enforcer;
@property (nonatomic) char hasEnforcer;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAction;
- (void)deleteEnforcer;
- (void)deleteResponseStatusCode;
- (id)suppressMessageUnderConditions;

@end
