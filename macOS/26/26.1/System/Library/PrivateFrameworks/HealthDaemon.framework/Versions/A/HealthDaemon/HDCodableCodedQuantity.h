@class NSString, HDCodableMedicalCoding;

@interface HDCodableCodedQuantity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRawValue;
@property (retain, nonatomic) NSString *rawValue;
@property (readonly, nonatomic) BOOL hasComparatorCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *comparatorCoding;
@property (readonly, nonatomic) BOOL hasUnitCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *unitCoding;

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
