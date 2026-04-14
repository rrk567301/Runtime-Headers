@class NSString, NSArray;

@interface CoreDAVSRVLookupTask : CoreDAVTask

@property (retain, nonatomic) NSString *serviceString;
@property (retain, nonatomic) NSArray *fetchedRecords;
@property (nonatomic) struct __CFHost { } *host;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (void)performCoreDAVTask;
- (id)initWithServiceString:(id)a0;

@end
