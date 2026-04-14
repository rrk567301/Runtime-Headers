@class NSArray, NSData;

@interface FLOWSchemaFLOWHomeCommunicationSendOrReply : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *targetTypes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearTargetType;
- (unsigned long long)targetTypeCount;
- (void)addTargetType:(int)a0;
- (void)deleteTargetType;
- (int)targetTypeAtIndex:(unsigned long long)a0;

@end
