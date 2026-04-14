@class CCDataSite, NSURL;

@interface CCDataResource : NSObject <NSCopying>

@property (readonly, nonatomic) CCDataSite *dataSite;
@property (readonly, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) NSURL *databaseURL;

+ (BOOL)directoryContainsDataResource:(id)a0;
+ (BOOL)performMaintenanceOnDatabase:(id)a0 modifiedCount:(unsigned long long *)a1 shouldDefer:(id /* block */)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeResource:(id *)a0;
- (BOOL)clearTombstoneStatus:(id *)a0;
- (id)initWithDataSite:(id)a0 directoryURL:(id)a1;
- (BOOL)markTombstoned:(id)a0 error:(id *)a1;
- (unsigned long long)resourceStatus;
- (id)setWithError:(id *)a0;
- (id)tombstoneDate:(id *)a0;

@end
