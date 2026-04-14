@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *changes;

+ (id)changeSetWithChanges:(id)a0;
+ (Class)changesType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)changesCount;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addChanges:(id)a0;
- (id)changesAtIndex:(unsigned long long)a0;
- (void)clearChanges;

@end
