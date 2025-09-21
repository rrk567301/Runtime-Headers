@class NSString;

@interface AWDIDSOutgoingMessageDurationTrace : PBCodable <NSCopying> {
    struct { unsigned char compressedMessageSize : 1; unsigned char messagesOnQueue : 1; unsigned char timestamp : 1; unsigned char uncompressedMessageSize : 1; unsigned char aggregatedMessageSendCount : 1; unsigned char avgAggregatedMessageSendDuration : 1; unsigned char avgEncryptionDuration : 1; unsigned char command : 1; unsigned char compressPayloadDuration : 1; unsigned char compressPayloadStart : 1; unsigned char encryptionCount : 1; unsigned char iDQueryDuration : 1; unsigned char iDQueryStart : 1; unsigned char messageOnQueueDuration : 1; unsigned char messageOnQueueStart : 1; unsigned char priority : 1; unsigned char sendToDaemonDuration : 1; unsigned char sendToDaemonStart : 1; unsigned char storeInDatabaseDuration : 1; unsigned char storeInDatabaseStart : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasSendToDaemonStart;
@property (nonatomic) unsigned int sendToDaemonStart;
@property (nonatomic) char hasSendToDaemonDuration;
@property (nonatomic) unsigned int sendToDaemonDuration;
@property (nonatomic) char hasStoreInDatabaseStart;
@property (nonatomic) unsigned int storeInDatabaseStart;
@property (nonatomic) char hasStoreInDatabaseDuration;
@property (nonatomic) unsigned int storeInDatabaseDuration;
@property (nonatomic) char hasCompressPayloadStart;
@property (nonatomic) unsigned int compressPayloadStart;
@property (nonatomic) char hasCompressPayloadDuration;
@property (nonatomic) unsigned int compressPayloadDuration;
@property (nonatomic) char hasUncompressedMessageSize;
@property (nonatomic) unsigned long long uncompressedMessageSize;
@property (nonatomic) char hasCompressedMessageSize;
@property (nonatomic) unsigned long long compressedMessageSize;
@property (nonatomic) char hasIDQueryStart;
@property (nonatomic) unsigned int iDQueryStart;
@property (nonatomic) char hasIDQueryDuration;
@property (nonatomic) unsigned int iDQueryDuration;
@property (nonatomic) char hasMessageOnQueueStart;
@property (nonatomic) unsigned int messageOnQueueStart;
@property (nonatomic) char hasMessageOnQueueDuration;
@property (nonatomic) unsigned int messageOnQueueDuration;
@property (nonatomic) char hasMessagesOnQueue;
@property (nonatomic) unsigned long long messagesOnQueue;
@property (nonatomic) char hasEncryptionCount;
@property (nonatomic) unsigned int encryptionCount;
@property (nonatomic) char hasAvgEncryptionDuration;
@property (nonatomic) unsigned int avgEncryptionDuration;
@property (nonatomic) char hasAggregatedMessageSendCount;
@property (nonatomic) unsigned int aggregatedMessageSendCount;
@property (nonatomic) char hasAvgAggregatedMessageSendDuration;
@property (nonatomic) unsigned int avgAggregatedMessageSendDuration;
@property (readonly, nonatomic) char hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) char hasCommand;
@property (nonatomic) unsigned int command;
@property (nonatomic) char hasPriority;
@property (nonatomic) unsigned int priority;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
