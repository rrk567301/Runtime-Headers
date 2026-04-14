@class NSData, CKDPRecordReference;

@interface CKDPRecordChainParent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPublicKeyID;
@property (retain, nonatomic) NSData *publicKeyID;
@property (readonly, nonatomic) BOOL hasReference;
@property (retain, nonatomic) CKDPRecordReference *reference;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
