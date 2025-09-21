@class NSData, NETSchemaNETNetworkInterface;

@interface NETSchemaNETDebugNetworkInterface : SISchemaInstrumentationMessage {
    struct { unsigned char rttCurrent : 1; unsigned char rttSmoothed : 1; unsigned char rttVariance : 1; unsigned char rttBest : 1; unsigned char packetsSent : 1; unsigned char packetsReceived : 1; unsigned char bytesSent : 1; unsigned char bytesRetransmitted : 1; unsigned char bytesUnacked : 1; unsigned char bytesReceived : 1; unsigned char duplicateBytesReceived : 1; unsigned char outOfOrderBytesReceived : 1; unsigned char sendBufferBytes : 1; unsigned char sendBandwidth : 1; unsigned char synRetransmits : 1; unsigned char tfoSynDataAcked : 1; unsigned char subflowSwitchCount : 1; } _has;
}

@property (nonatomic) unsigned int rttCurrent;
@property (nonatomic) char hasRttCurrent;
@property (nonatomic) unsigned int rttSmoothed;
@property (nonatomic) char hasRttSmoothed;
@property (nonatomic) unsigned int rttVariance;
@property (nonatomic) char hasRttVariance;
@property (nonatomic) unsigned int rttBest;
@property (nonatomic) char hasRttBest;
@property (nonatomic) unsigned long long packetsSent;
@property (nonatomic) char hasPacketsSent;
@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) char hasPacketsReceived;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) char hasBytesSent;
@property (nonatomic) unsigned long long bytesRetransmitted;
@property (nonatomic) char hasBytesRetransmitted;
@property (nonatomic) unsigned long long bytesUnacked;
@property (nonatomic) char hasBytesUnacked;
@property (nonatomic) unsigned long long bytesReceived;
@property (nonatomic) char hasBytesReceived;
@property (nonatomic) unsigned long long duplicateBytesReceived;
@property (nonatomic) char hasDuplicateBytesReceived;
@property (nonatomic) unsigned long long outOfOrderBytesReceived;
@property (nonatomic) char hasOutOfOrderBytesReceived;
@property (nonatomic) unsigned long long sendBufferBytes;
@property (nonatomic) char hasSendBufferBytes;
@property (nonatomic) unsigned long long sendBandwidth;
@property (nonatomic) char hasSendBandwidth;
@property (nonatomic) unsigned int synRetransmits;
@property (nonatomic) char hasSynRetransmits;
@property (nonatomic) unsigned int tfoSynDataAcked;
@property (nonatomic) char hasTfoSynDataAcked;
@property (nonatomic) unsigned int subflowSwitchCount;
@property (nonatomic) char hasSubflowSwitchCount;
@property (retain, nonatomic) NETSchemaNETNetworkInterface *networkInterface;
@property (nonatomic) char hasNetworkInterface;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBytesSent;
- (void)deleteBytesReceived;
- (void)deleteBytesRetransmitted;
- (void)deleteBytesUnacked;
- (void)deleteDuplicateBytesReceived;
- (void)deleteNetworkInterface;
- (void)deleteOutOfOrderBytesReceived;
- (void)deletePacketsReceived;
- (void)deletePacketsSent;
- (void)deleteRttBest;
- (void)deleteRttCurrent;
- (void)deleteRttSmoothed;
- (void)deleteRttVariance;
- (void)deleteSendBandwidth;
- (void)deleteSendBufferBytes;
- (void)deleteSubflowSwitchCount;
- (void)deleteSynRetransmits;
- (void)deleteTfoSynDataAcked;
- (id)suppressMessageUnderConditions;

@end
