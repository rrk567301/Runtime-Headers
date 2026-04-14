@class NSData;

@interface CKDPPackageManifestItem : PBCodable <NSCopying> {
    struct { unsigned char size : 1; unsigned char lastItem : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) long long size;
@property (nonatomic) BOOL hasLastItem;
@property (nonatomic) BOOL lastItem;

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
