@class NSString, KHDBLockedDictionary, KHDBValueSelector, KHDBRidIndexEntity;

@interface KHDBRidIndex : NSObject {
    int _spinlock;
}

@property (retain, nonatomic) NSString *indexName;
@property (readonly, retain, nonatomic) KHDBRidIndexEntity *indexEntity;
@property (readonly, retain, nonatomic) KHDBValueSelector *valueSelector;
@property (readonly, retain, nonatomic) KHDBValueSelector *returnIdSelector;
@property (readonly, retain, nonatomic) KHDBLockedDictionary *indexesByValue;
@property (readonly, retain, nonatomic) NSString *returnsIdColumn;
@property (nonatomic) BOOL allowsDuplicateIds;

- (void)dealloc;
- (id)description;
- (BOOL)isEmpty;
- (void)clearIndex;
- (void)addToIndex:(id)a0;
- (void)removeFromIndex:(id)a0;
- (void)updateIndex:(id)a0 forValue:(id)a1 forFieldName:(id)a2;
- (void)andRids:(id)a0;
- (id)initWithIndexName:(id)a0 returnsIdColumn:(id)a1 forIndexEntity:(id)a2;
- (id)convertValueToIndexKey:(id)a0;
- (void)setIndex:(id)a0 forValue:(id)a1;
- (id)indexForValue:(id)a0 createIfMissing:(BOOL)a1;
- (void)dropIndexForValue:(id)a0;
- (void)saveIndex;
- (id)valueForModel:(id)a0;
- (unsigned long long)idForModel:(id)a0;
- (void)addToIndexForId:(unsigned long long)a0 forValue:(id)a1;
- (void)removeRidFromIndex:(unsigned long long)a0;
- (id)valueForModel:(id)a0 replacingValue:(id)a1 forFieldName:(id)a2;
- (id)indexForValue:(id)a0;
- (void)updateIndexForId:(unsigned long long)a0 forValue:(id)a1;
- (id)initWithIndexName:(id)a0 forIndexEntity:(id)a1;
- (BOOL)isNullOnlyIndex;
- (void)combineAllIndexesToValue:(id)a0;
- (void)loadIndex;
- (void)forceSaveIndex;
- (void)updateIndex:(id)a0 forValue:(id)a1;
- (void)removeRidsFromIndex:(id)a0;
- (void)copyFromIndex:(id)a0;
- (unsigned long long)highestId;
- (BOOL)idInUse:(unsigned long long)a0;

@end
