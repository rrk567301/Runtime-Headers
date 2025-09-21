@class NSString;

@interface AWDIDSLocalDeliverySocketOpened : PBCodable <NSCopying> {
    struct { unsigned char isToDefaultPairedDevice : 1; unsigned char openError : 1; unsigned char priority : 1; unsigned char socketError : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) char hasIsToDefaultPairedDevice;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) char hasOpenError;
@property (nonatomic) unsigned long long openError;
@property (nonatomic) char hasSocketError;
@property (nonatomic) unsigned long long socketError;
@property (nonatomic) char hasPriority;
@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) char hasStreamName;
@property (retain, nonatomic) NSString *streamName;
@property (readonly, nonatomic) char hasGuid;
@property (retain, nonatomic) NSString *guid;

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
