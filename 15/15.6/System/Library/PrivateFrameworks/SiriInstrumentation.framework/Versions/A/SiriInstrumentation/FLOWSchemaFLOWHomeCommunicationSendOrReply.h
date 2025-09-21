@class NSArray, NSData;

@interface FLOWSchemaFLOWHomeCommunicationSendOrReply : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *targetTypes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)targetTypeCount;
- (void)clearTargetType;
- (void)addTargetType:(int)a0;
- (void)deleteTargetType;
- (id)suppressMessageUnderConditions;
- (int)targetTypeAtIndex:(unsigned long long)a0;

@end
