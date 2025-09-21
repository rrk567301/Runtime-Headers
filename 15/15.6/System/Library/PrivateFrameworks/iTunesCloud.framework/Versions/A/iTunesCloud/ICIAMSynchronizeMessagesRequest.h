@class NSString;

@interface ICIAMSynchronizeMessagesRequest : PBRequest <NSCopying> {
    struct { unsigned char commandSerialNumber : 1; unsigned char dSID : 1; unsigned char activeCommandsOnly : 1; } _has;
}

@property (nonatomic) char hasCommandSerialNumber;
@property (nonatomic) long long commandSerialNumber;
@property (nonatomic) char hasDSID;
@property (nonatomic) long long dSID;
@property (readonly, nonatomic) char hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) char hasActiveCommandsOnly;
@property (nonatomic) char activeCommandsOnly;

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
