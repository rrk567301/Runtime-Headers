@class NSMutableArray;

@interface HDCodableGeneratedObjectCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *medicationDoseEvents;

+ (Class)medicationDoseEventType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)count;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addMedicationDoseEvent:(id)a0;
- (void)clearMedicationDoseEvents;
- (id)decodedObjects;
- (id)medicationDoseEventAtIndex:(unsigned long long)a0;
- (unsigned long long)medicationDoseEventsCount;
- (BOOL)unitTest_isEquivalentToGeneratedObjectCollection:(id)a0;

@end
