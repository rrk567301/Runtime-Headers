@interface HDRaceRouteSnapshotEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertSnapshotData:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (char)pruneUnreachableDataWithTransaction:(id)a0 error:(id *)a1;

- (char)deleteDataWithTransaction:(id)a0 error:(id *)a1;
- (id)snapshotDataWithTransaction:(id)a0 error:(id *)a1;
- (char)updateSnapshotData:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
