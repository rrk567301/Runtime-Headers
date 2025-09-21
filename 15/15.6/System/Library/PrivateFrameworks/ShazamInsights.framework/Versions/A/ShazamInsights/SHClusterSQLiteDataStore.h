@class NSString, NSURL, SHClusterStatus;

@interface SHClusterSQLiteDataStore : NSObject

@property (readonly) long long clusterType;
@property (readonly, copy) NSString *requiredStorefront;
@property (readonly) SHClusterStatus *dataStatus;
@property (readonly) double databaseMaxAge;
@property (readonly) NSURL *databaseFilePathURL;

+ (char)sqliteDatabaseExistsAtURL:(id)a0;

- (void).cxx_destruct;
- (char)isDataValid;
- (char)isDataLoaded;
- (char)hasNotPassedExpiryDate:(id)a0 isForCountryCode:(id)a1;
- (id)initWithClusterType:(long long)a0 databaseMaxAge:(double)a1 forStorefront:(id)a2 databaseFilePathURL:(id)a3;

@end
