@class NSString;

@interface AWDIDSWebTunnelRequestCompleted : PBCodable <NSCopying> {
    struct { unsigned char requestSize : 1; unsigned char timeTaken : 1; unsigned char timestamp : 1; unsigned char deliveryType : 1; unsigned char tunnelError : 1; unsigned char reversePushAttempted : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) char hasTimeTaken;
@property (nonatomic) unsigned long long timeTaken;
@property (nonatomic) char hasDeliveryType;
@property (nonatomic) int deliveryType;
@property (nonatomic) char hasTunnelError;
@property (nonatomic) int tunnelError;
@property (nonatomic) char hasRequestSize;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic) char hasReversePushAttempted;
@property (nonatomic) char reversePushAttempted;

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
