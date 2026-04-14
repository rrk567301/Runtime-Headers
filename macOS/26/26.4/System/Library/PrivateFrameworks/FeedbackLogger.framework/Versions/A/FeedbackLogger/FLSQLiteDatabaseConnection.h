@class NSString, NSObject;
@protocol OS_os_log;

@interface FLSQLiteDatabaseConnection : NSObject

@property (copy, nonatomic) NSString *storePath;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) struct sqlite3 { } *db;

- (BOOL)open;
- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithStorePath:(id)a0;

@end
