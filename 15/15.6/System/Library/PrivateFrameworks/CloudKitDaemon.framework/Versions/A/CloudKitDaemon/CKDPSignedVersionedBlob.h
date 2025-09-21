@class NSData;

@interface CKDPSignedVersionedBlob : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char canValidateWithKT : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (readonly, nonatomic) char hasSerializedObject;
@property (retain, nonatomic) NSData *serializedObject;
@property (nonatomic) char hasCanValidateWithKT;
@property (nonatomic) char canValidateWithKT;

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
