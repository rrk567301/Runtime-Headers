@class HDCodableMedicalCodingList, HDCodableInspectableValue, NSMutableArray;

@interface HDCodableCodedValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *codings;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HDCodableInspectableValue *value;
@property (retain, nonatomic) NSMutableArray *referenceRanges;

+ (Class)referenceRangesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addReferenceRanges:(id)a0;
- (void)clearReferenceRanges;
- (id)referenceRangesAtIndex:(unsigned long long)a0;
- (unsigned long long)referenceRangesCount;

@end
