@interface _MRRegisterVoiceInputDeviceResponseMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char deviceID : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) char hasDeviceID;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) unsigned int errorCode;

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
