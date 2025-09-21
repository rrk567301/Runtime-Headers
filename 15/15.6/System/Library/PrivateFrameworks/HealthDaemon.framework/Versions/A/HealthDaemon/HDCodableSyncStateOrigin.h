@class NSString, HDCodableSyncIdentity;

@interface HDCodableSyncStateOrigin : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char patchVersion : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) char hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) char hasMajorVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) char hasMinorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) char hasPatchVersion;
@property (nonatomic) int patchVersion;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
