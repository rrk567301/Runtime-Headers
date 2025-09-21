@class NSString;

@interface ICIAMSerialCheckRequest : PBRequest <NSCopying> {
    struct { unsigned char dSID : 1; } _has;
}

@property (nonatomic) char hasDSID;
@property (nonatomic) long long dSID;
@property (readonly, nonatomic) char hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;

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
