@interface HDCachedSyncRequestEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (char)clearInProgressSyncRequests:(id)a0 error:(id *)a1;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)fetchAllInProgressSyncRequests:(id)a0 error:(id *)a1;
+ (id)fetchAllSyncRequests:(id)a0 error:(id *)a1;
+ (char)fetchCoalescedSyncRequest:(id *)a0 transaction:(id)a1 error:(id *)a2;
+ (char)insertSyncRequest:(id)a0 reason:(id)a1 date:(id)a2 profile:(id)a3 error:(id *)a4;
+ (char)markInProgressRequestsAsPending:(id)a0 error:(id *)a1;
+ (char)markPendingRequestsAsInProgress:(id)a0 error:(id *)a1;

@end
