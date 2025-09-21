@class NSString, NSData;

@interface PKProtobufDeviceSharingCapabilities : PBCodable <NSCopying> {
    struct { unsigned char supportsManatee : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasHandle;
@property (retain, nonatomic) NSString *handle;
@property (readonly, nonatomic) char hasAltDSID;
@property (retain, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) char hasDeviceRegion;
@property (retain, nonatomic) NSString *deviceRegion;
@property (nonatomic) char hasSupportsManatee;
@property (nonatomic) char supportsManatee;
@property (readonly, nonatomic) char hasFromDeviceVersion;
@property (retain, nonatomic) NSData *fromDeviceVersion;

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
