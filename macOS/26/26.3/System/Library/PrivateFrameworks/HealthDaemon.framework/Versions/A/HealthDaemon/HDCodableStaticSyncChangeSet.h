@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *changes;

+ (id)changeSetWithChanges:(id)a0;
+ (Class)changesType;

- (void)addChanges:(id)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)changesCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)changesAtIndex:(unsigned long long)a0;
- (void)clearChanges;

@end
