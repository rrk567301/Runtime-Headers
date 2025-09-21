@class _MRVirtualTouchEventProtobuf;

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char virtualDeviceID : 1; } _has;
}

@property (nonatomic) BOOL hasVirtualDeviceID;
@property (nonatomic) unsigned long long virtualDeviceID;
@property (readonly, nonatomic) BOOL hasEvent;
@property (retain, nonatomic) _MRVirtualTouchEventProtobuf *event;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
