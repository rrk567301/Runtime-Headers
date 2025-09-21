@class NSString;

@interface AWDIDSQRAllocation : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char hasRecipientAccepted : 1; unsigned char payloadSize : 1; unsigned char result : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) char hasResult;
@property (nonatomic) unsigned int result;
@property (nonatomic) char hasHasRecipientAccepted;
@property (nonatomic) unsigned int hasRecipientAccepted;
@property (nonatomic) char hasPayloadSize;
@property (nonatomic) unsigned int payloadSize;
@property (readonly, nonatomic) char hasTopic;
@property (retain, nonatomic) NSString *topic;
@property (readonly, nonatomic) char hasService;
@property (retain, nonatomic) NSString *service;

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
