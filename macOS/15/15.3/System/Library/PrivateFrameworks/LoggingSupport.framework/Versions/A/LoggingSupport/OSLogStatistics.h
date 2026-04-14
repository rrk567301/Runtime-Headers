@class NSString, NSError, OSLogEventSource, NSDate;

@interface OSLogStatistics : NSObject

@property (retain, nonatomic) OSLogEventSource *eventSource;
@property (retain, nonatomic) NSError *processingError;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) NSString *archivePath;

- (void).cxx_destruct;
- (id)aggregationForStartDate:(id)a0 endDate:(id)a1 predicate:(id)a2 withOptions:(unsigned long long)a3 errorOut:(id *)a4;
- (id)_initializeEventSourceWithPaths:(id)a0;
- (id)initWithLogArchivePath:(id)a0 errorOut:(id *)a1;
- (id)initWithLogArchivePath:(id)a0 forRelativePaths:(id)a1 errorOut:(id *)a2;

@end
