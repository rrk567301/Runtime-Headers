@class NSString;

@interface MXDeviceInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) char hasDeviceVersion;
@property (retain, nonatomic) NSString *deviceVersion;
@property (readonly, nonatomic) char hasSystemName;
@property (retain, nonatomic) NSString *systemName;
@property (readonly, nonatomic) char hasSystemVersion;
@property (retain, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) char hasSystemBuild;
@property (retain, nonatomic) NSString *systemBuild;

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
