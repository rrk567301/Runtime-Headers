@class NSString;

@interface HMAccessoryInfoProtoSoftwareVersionInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char updateVersion : 1; } _has;
}

@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) long long majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) long long minorVersion;
@property (nonatomic) BOOL hasUpdateVersion;
@property (nonatomic) long long updateVersion;
@property (readonly, nonatomic) BOOL hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
