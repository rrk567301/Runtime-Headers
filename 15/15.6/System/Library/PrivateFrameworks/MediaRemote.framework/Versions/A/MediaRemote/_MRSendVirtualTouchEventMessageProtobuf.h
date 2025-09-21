@class _MRVirtualTouchEventProtobuf;

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char virtualDeviceID : 1; } _has;
}

@property (nonatomic) char hasVirtualDeviceID;
@property (nonatomic) unsigned long long virtualDeviceID;
@property (readonly, nonatomic) char hasEvent;
@property (retain, nonatomic) _MRVirtualTouchEventProtobuf *event;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
