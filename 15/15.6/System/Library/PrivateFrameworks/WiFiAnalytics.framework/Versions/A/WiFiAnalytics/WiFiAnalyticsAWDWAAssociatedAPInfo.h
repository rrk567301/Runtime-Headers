@class NSString;

@interface WiFiAnalyticsAWDWAAssociatedAPInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasManufacturerElement;
@property (retain, nonatomic) NSString *manufacturerElement;
@property (readonly, nonatomic) char hasModelName;
@property (retain, nonatomic) NSString *modelName;
@property (readonly, nonatomic) char hasModelNumber;
@property (retain, nonatomic) NSString *modelNumber;
@property (readonly, nonatomic) char hasDeviceNameElement;
@property (retain, nonatomic) NSString *deviceNameElement;
@property (readonly, nonatomic) char hasDeviceNameData;
@property (retain, nonatomic) NSString *deviceNameData;

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
