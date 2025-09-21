@class NSData;

@interface CKDPPackageManifestSection : PBCodable <NSCopying> {
    struct { unsigned char size : 1; unsigned char lastSection : 1; } _has;
}

@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) char hasSize;
@property (nonatomic) long long size;
@property (nonatomic) char hasLastSection;
@property (nonatomic) char lastSection;
@property (readonly, nonatomic) char hasVerificationKey;
@property (retain, nonatomic) NSData *verificationKey;

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
