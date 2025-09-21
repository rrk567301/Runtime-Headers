@class NSString, NSMutableArray;

@interface PKProtobufPaymentDeviceRequest : PBRequest <NSCopying> {
    struct { unsigned char protocolVersion : 1; unsigned char shouldAdvertise : 1; } _has;
}

@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) char hasShouldAdvertise;
@property (nonatomic) char shouldAdvertise;
@property (retain, nonatomic) NSMutableArray *knownManifestHashes;
@property (nonatomic) char hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;

+ (Class)knownManifestHashesType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addKnownManifestHashes:(id)a0;
- (void)clearKnownManifestHashes;
- (id)knownManifestHashesAtIndex:(unsigned long long)a0;
- (unsigned long long)knownManifestHashesCount;

@end
