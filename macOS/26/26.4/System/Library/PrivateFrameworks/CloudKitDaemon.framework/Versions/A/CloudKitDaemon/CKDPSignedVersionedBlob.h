@class NSData;

@interface CKDPSignedVersionedBlob : PBCodable <NSCopying> {
    struct { unsigned char version : 1; unsigned char canValidateWithKT : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (readonly, nonatomic) BOOL hasSerializedObject;
@property (retain, nonatomic) NSData *serializedObject;
@property (nonatomic) BOOL hasCanValidateWithKT;
@property (nonatomic) BOOL canValidateWithKT;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
