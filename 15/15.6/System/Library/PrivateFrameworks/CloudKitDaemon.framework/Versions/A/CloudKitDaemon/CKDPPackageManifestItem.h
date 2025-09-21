@class NSData;

@interface CKDPPackageManifestItem : PBCodable <NSCopying> {
    struct { unsigned char size : 1; unsigned char lastItem : 1; } _has;
}

@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) char hasSize;
@property (nonatomic) long long size;
@property (nonatomic) char hasLastItem;
@property (nonatomic) char lastItem;

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
