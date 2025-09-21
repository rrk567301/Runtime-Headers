@class NSString, NSData;

@interface SISchemaClientTransportEventMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char eventTransmittedRelativeToBootTimeTimestampNs : 1; unsigned char serverArrivedTimestampNs : 1; } _has;
}

@property (copy, nonatomic) NSString *eventTransmittedTimestampRefId;
@property (nonatomic) char hasEventTransmittedTimestampRefId;
@property (nonatomic) long long eventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic) char hasEventTransmittedRelativeToBootTimeTimestampNs;
@property (nonatomic) long long serverArrivedTimestampNs;
@property (nonatomic) char hasServerArrivedTimestampNs;
@property (copy, nonatomic) NSString *arrivedServerPod;
@property (nonatomic) char hasArrivedServerPod;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteArrivedServerPod;
- (void)deleteEventTransmittedRelativeToBootTimeTimestampNs;
- (void)deleteEventTransmittedTimestampRefId;
- (void)deleteServerArrivedTimestampNs;
- (id)suppressMessageUnderConditions;

@end
