@class NSString;

@interface BMPBDeviceMetadataEvent : PBCodable <NSCopying> {
    struct { unsigned char platform : 1; unsigned char rapidSecurityResponsePreReboot : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) char hasPlatform;
@property (nonatomic) int platform;
@property (readonly, nonatomic) char hasSupplementalBuild;
@property (retain, nonatomic) NSString *supplementalBuild;
@property (nonatomic) char hasRapidSecurityResponsePreReboot;
@property (nonatomic) char rapidSecurityResponsePreReboot;

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
- (int)StringAsPlatform:(id)a0;
- (id)platformAsString:(int)a0;

@end
