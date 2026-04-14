@class HDCodableMedicalDate, NSMutableArray, HDCodableMedicalCoding;

@interface HDCodableAllergyReaction : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *manifestationCodings;
@property (readonly, nonatomic) BOOL hasSeverityCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *severityCoding;
@property (readonly, nonatomic) BOOL hasOnsetDate;
@property (retain, nonatomic) HDCodableMedicalDate *onsetDate;

+ (Class)manifestationCodingsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addManifestationCodings:(id)a0;
- (void)clearManifestationCodings;
- (id)manifestationCodingsAtIndex:(unsigned long long)a0;
- (unsigned long long)manifestationCodingsCount;

@end
