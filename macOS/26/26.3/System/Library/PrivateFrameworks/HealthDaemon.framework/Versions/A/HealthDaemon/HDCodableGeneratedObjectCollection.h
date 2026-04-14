@class NSMutableArray;

@interface HDCodableGeneratedObjectCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *medicationDoseEvents;

+ (Class)medicationDoseEventType;

- (unsigned long long)count;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addMedicationDoseEvent:(id)a0;
- (void)clearMedicationDoseEvents;
- (id)decodedObjects;
- (id)medicationDoseEventAtIndex:(unsigned long long)a0;
- (unsigned long long)medicationDoseEventsCount;
- (BOOL)unitTest_isEquivalentToGeneratedObjectCollection:(id)a0;

@end
