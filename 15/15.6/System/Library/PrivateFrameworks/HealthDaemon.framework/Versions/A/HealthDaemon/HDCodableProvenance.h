@class NSString, NSData;

@interface HDCodableProvenance : PBCodable <NSCopying> {
    struct { unsigned char originMajorVersion : 1; unsigned char originMinorVersion : 1; unsigned char originPatchVersion : 1; } _has;
}

@property (readonly, nonatomic) char hasOriginBuild;
@property (retain, nonatomic) NSString *originBuild;
@property (readonly, nonatomic) char hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (readonly, nonatomic) char hasDeviceUUID;
@property (retain, nonatomic) NSData *deviceUUID;
@property (readonly, nonatomic) char hasSourceVersion;
@property (retain, nonatomic) NSString *sourceVersion;
@property (readonly, nonatomic) char hasOriginProductType;
@property (retain, nonatomic) NSString *originProductType;
@property (readonly, nonatomic) char hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;
@property (nonatomic) char hasOriginMajorVersion;
@property (nonatomic) int originMajorVersion;
@property (nonatomic) char hasOriginMinorVersion;
@property (nonatomic) int originMinorVersion;
@property (nonatomic) char hasOriginPatchVersion;
@property (nonatomic) int originPatchVersion;
@property (readonly, nonatomic) char hasContributorUUID;
@property (retain, nonatomic) NSData *contributorUUID;

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
- (id)decodedDeviceUUID;
- (id)decodedSourceUUID;

@end
