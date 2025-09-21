@class NSString;

@interface AWDIDSLocalDeliveryMessageDelivered : PBCodable <NSCopying> {
    struct { unsigned char deliveryError : 1; unsigned char isToDefaultPairedDevice : 1; unsigned char linkType : 1; unsigned char messageSize : 1; unsigned char priority : 1; unsigned char rTT : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) char hasIsToDefaultPairedDevice;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) char hasMessageSize;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) char hasDeliveryError;
@property (nonatomic) unsigned long long deliveryError;
@property (nonatomic) char hasRTT;
@property (nonatomic) unsigned long long rTT;
@property (nonatomic) char hasLinkType;
@property (nonatomic) unsigned long long linkType;
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
