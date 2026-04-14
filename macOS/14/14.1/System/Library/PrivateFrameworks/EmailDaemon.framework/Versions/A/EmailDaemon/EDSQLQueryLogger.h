@class NSString, NSFileHandle;
@protocol EFScheduler;

@interface EDSQLQueryLogger : NSObject <EFSQLQueryLogging>

@property (readonly, nonatomic) id<EFScheduler> queryLoggingScheduler;
@property (retain, nonatomic) NSString *queryInfoFilePath;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)logQueryString:(id)a0 label:(id)a1 firstRowExecutionTime:(double)a2 totalExecutionTime:(double)a3 numberOfRows:(unsigned long long)a4;
- (id)_createFileHandle;
- (id)_createQueryInfoFilePath;
- (void)_saveSQLQueryInfo:(id)a0;

@end
