@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *changes;

+ (id)changeSetWithChanges:(id)a0;
+ (Class)changesType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)changesCount;
- (id)dictionaryRepresentation;
- (void)addChanges:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)changesAtIndex:(unsigned long long)a0;
- (void)clearChanges;

@end
