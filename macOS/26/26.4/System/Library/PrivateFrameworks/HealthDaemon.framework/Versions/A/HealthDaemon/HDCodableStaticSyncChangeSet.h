@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *changes;

+ (id)changeSetWithChanges:(id)a0;
+ (Class)changesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addChanges:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)changesCount;
- (id)changesAtIndex:(unsigned long long)a0;
- (void)clearChanges;

@end
