@class NSString, HDCodableMedicalCoding;

@interface HDCodableCodedQuantity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRawValue;
@property (retain, nonatomic) NSString *rawValue;
@property (readonly, nonatomic) BOOL hasComparatorCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *comparatorCoding;
@property (readonly, nonatomic) BOOL hasUnitCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *unitCoding;

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
