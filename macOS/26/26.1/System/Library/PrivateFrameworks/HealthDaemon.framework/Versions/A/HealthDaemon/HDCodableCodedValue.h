@class HDCodableMedicalCodingList, HDCodableInspectableValue, NSMutableArray;

@interface HDCodableCodedValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *codings;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HDCodableInspectableValue *value;
@property (retain, nonatomic) NSMutableArray *referenceRanges;

+ (Class)referenceRangesType;

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
- (void)addReferenceRanges:(id)a0;
- (void)clearReferenceRanges;
- (id)referenceRangesAtIndex:(unsigned long long)a0;
- (unsigned long long)referenceRangesCount;

@end
