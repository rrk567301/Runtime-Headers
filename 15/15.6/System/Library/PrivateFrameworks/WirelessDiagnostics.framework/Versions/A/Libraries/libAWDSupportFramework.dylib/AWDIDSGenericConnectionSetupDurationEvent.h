@interface AWDIDSGenericConnectionSetupDurationEvent : PBCodable <NSCopying> {
    struct { unsigned char connectionSetupDuration : 1; unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char errorCode : 1; unsigned char linkType : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasLinkType;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) char hasConnectionSetupDuration;
@property (nonatomic) unsigned long long connectionSetupDuration;
@property (nonatomic) char hasSuccess;
@property (nonatomic) char success;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) char hasConnectionType;
@property (nonatomic) unsigned int connectionType;

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
