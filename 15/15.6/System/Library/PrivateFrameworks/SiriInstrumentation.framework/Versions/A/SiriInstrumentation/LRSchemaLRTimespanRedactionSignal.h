@class NSData;

@interface LRSchemaLRTimespanRedactionSignal : SISchemaInstrumentationMessage {
    struct { unsigned char startTimeInNs : 1; unsigned char endTimeInNs : 1; } _has;
}

@property (nonatomic) unsigned long long startTimeInNs;
@property (nonatomic) char hasStartTimeInNs;
@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) char hasEndTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEndTimeInNs;
- (void)deleteStartTimeInNs;
- (id)suppressMessageUnderConditions;

@end
