@class NSData;

@interface NPKProtoSignDataResponse : PBCodable <NSCopying> {
    struct { unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (readonly, nonatomic) BOOL hasSignedData;
@property (retain, nonatomic) NSData *signedData;
@property (readonly, nonatomic) BOOL hasCertsBytes;
@property (retain, nonatomic) NSData *certsBytes;
@property (readonly, nonatomic) BOOL hasSignatureInfoBytes;
@property (retain, nonatomic) NSData *signatureInfoBytes;

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
