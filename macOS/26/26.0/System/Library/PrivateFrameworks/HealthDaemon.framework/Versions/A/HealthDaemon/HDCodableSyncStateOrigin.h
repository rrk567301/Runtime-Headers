@class NSString, HDCodableSyncIdentity;

@interface HDCodableSyncStateOrigin : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char patchVersion : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) int patchVersion;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
