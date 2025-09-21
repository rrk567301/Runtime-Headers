@class NSString;

@interface AWDIDSClientProcessReceivedMessage : PBCodable <NSCopying> {
    struct { unsigned char deltaTime : 1; unsigned char payloadSize : 1; unsigned char priority : 1; unsigned char qos : 1; unsigned char threadPriority : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) char hasPayloadSize;
@property (nonatomic) unsigned long long payloadSize;
@property (nonatomic) char hasQos;
@property (nonatomic) unsigned long long qos;
@property (nonatomic) char hasThreadPriority;
@property (nonatomic) unsigned long long threadPriority;
@property (nonatomic) char hasDeltaTime;
@property (nonatomic) unsigned long long deltaTime;
@property (nonatomic) char hasPriority;
@property (nonatomic) unsigned long long priority;

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
