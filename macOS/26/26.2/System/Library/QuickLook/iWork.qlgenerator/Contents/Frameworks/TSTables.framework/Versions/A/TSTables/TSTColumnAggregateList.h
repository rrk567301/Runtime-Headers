@class NSArray;

@interface TSTColumnAggregateList : TSCKSosBase <NSCopying> {
    NSArray *_columnAggregates;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *asArray;
@property (readonly, nonatomic) NSArray *columnAggregateUuids;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (id)aggregateAtIndex:(unsigned long long)a0;
- (id)aggregatesOnLevel:(unsigned char)a0;
- (struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct { struct TSKUIDStruct *x0; } x2; })columnAggregateUidList;
- (id)initWithColumnAggregates:(id)a0;
- (BOOL)isFunctionallyEquivalent:(id)a0;

@end
