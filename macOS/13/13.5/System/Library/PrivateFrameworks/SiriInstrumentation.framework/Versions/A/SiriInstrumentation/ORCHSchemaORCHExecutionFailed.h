@class NSString, NSData;

@interface ORCHSchemaORCHExecutionFailed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *errorString;
@property (nonatomic) BOOL hasErrorString;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorString;
- (id)suppressMessageUnderConditions;

@end
