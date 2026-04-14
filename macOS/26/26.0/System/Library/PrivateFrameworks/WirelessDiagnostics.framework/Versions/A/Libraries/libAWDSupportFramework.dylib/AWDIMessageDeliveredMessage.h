@class NSString;

@interface AWDIMessageDeliveredMessage : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char deliveryDuration : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDeliveryDuration;
@property (nonatomic) unsigned int deliveryDuration;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
