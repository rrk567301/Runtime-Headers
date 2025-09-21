@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _deviceIDs;
    struct { unsigned char errorCode : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long deviceIDsCount;
@property (readonly, nonatomic) unsigned int *deviceIDs;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) unsigned int errorCode;

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
- (void)addDeviceIDs:(unsigned int)a0;
- (void)clearDeviceIDs;
- (unsigned int)deviceIDsAtIndex:(unsigned long long)a0;
- (void)setDeviceIDs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
