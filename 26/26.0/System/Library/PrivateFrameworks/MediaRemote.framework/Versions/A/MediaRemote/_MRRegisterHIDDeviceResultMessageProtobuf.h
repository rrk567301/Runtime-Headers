@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char deviceIdentifier : 1; unsigned char errorCode : 1; } _has;
}

@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasDeviceIdentifier;
@property (nonatomic) unsigned int deviceIdentifier;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
