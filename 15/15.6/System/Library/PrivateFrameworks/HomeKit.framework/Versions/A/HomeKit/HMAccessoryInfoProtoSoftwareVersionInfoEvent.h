@class NSString;

@interface HMAccessoryInfoProtoSoftwareVersionInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char updateVersion : 1; } _has;
}

@property (nonatomic) char hasMajorVersion;
@property (nonatomic) long long majorVersion;
@property (nonatomic) char hasMinorVersion;
@property (nonatomic) long long minorVersion;
@property (nonatomic) char hasUpdateVersion;
@property (nonatomic) long long updateVersion;
@property (readonly, nonatomic) char hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;

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
