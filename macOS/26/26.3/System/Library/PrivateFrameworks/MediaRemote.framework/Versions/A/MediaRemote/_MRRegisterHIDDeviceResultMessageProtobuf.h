@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char deviceIdentifier : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasDeviceIdentifier;
@property (nonatomic) unsigned int deviceIdentifier;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
