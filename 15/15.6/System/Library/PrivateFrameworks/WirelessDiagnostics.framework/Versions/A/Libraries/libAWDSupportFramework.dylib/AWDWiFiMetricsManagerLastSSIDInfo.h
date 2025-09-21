@class NSData;

@interface AWDWiFiMetricsManagerLastSSIDInfo : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasLastSSIDAttempted;
@property (retain, nonatomic) NSData *lastSSIDAttempted;
@property (readonly, nonatomic) char hasLastSSIDConnectedTo;
@property (retain, nonatomic) NSData *lastSSIDConnectedTo;

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
