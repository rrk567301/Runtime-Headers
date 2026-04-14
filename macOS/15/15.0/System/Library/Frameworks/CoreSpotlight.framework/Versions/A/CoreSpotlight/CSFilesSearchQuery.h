@class CSFilesSearchQueryContext, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSFilesSearchQuery : CSSearchQuery

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSFilesSearchQueryContext *context;
@property (retain, nonatomic) NSMutableSet *processedItems;
@property (nonatomic) BOOL completions;
@property (nonatomic) BOOL completed;
@property (nonatomic) struct __MDQuery { } *mdQuery;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (unsigned long long)foundItemCount;
- (void)handleNotification:(id)a0;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;
- (id)initWithQueryString:(id)a0 context:(id)a1;

@end
