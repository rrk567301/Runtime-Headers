@class NSString;

@interface ICIAMSerialCheckRequest : PBRequest <NSCopying> {
    struct { unsigned char dSID : 1; } _has;
}

@property (nonatomic) BOOL hasDSID;
@property (nonatomic) long long dSID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;

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
