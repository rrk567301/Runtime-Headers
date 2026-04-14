@class NSString, HDCodableMedicalCoding;

@interface HDCodableCodedQuantity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRawValue;
@property (retain, nonatomic) NSString *rawValue;
@property (readonly, nonatomic) BOOL hasComparatorCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *comparatorCoding;
@property (readonly, nonatomic) BOOL hasUnitCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *unitCoding;

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
