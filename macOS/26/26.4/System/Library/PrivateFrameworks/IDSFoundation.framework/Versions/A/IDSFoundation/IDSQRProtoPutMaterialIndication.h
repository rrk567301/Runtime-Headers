@class IDSQRProtoPutMaterialErrorIndication, NSMutableArray;

@interface IDSQRProtoPutMaterialIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *materials;
@property (readonly, nonatomic) BOOL hasMissingMaterial;
@property (retain, nonatomic) IDSQRProtoPutMaterialErrorIndication *missingMaterial;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

+ (Class)materialsType;

- (void)clearMaterials;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)materialsCount;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addMaterials:(id)a0;
- (id)materialsAtIndex:(unsigned long long)a0;

@end
