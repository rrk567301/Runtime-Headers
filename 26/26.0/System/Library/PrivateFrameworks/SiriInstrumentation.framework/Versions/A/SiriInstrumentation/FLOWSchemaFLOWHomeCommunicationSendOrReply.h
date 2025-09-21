@class NSArray, NSData;

@interface FLOWSchemaFLOWHomeCommunicationSendOrReply : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *targetTypes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)targetTypeCount;
- (void)clearTargetType;
- (void)addTargetType:(int)a0;
- (void)deleteTargetType;
- (int)targetTypeAtIndex:(unsigned long long)a0;

@end
