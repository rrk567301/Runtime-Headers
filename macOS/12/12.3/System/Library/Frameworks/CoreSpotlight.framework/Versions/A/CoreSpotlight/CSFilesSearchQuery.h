@class CSFilesSearchQueryContext, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSFilesSearchQuery : CSSearchQuery

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct __MDQuery { } *mdQuery;
@property (retain, nonatomic) CSFilesSearchQueryContext *context;
@property (retain, nonatomic) NSMutableSet *processedItems;
@property (nonatomic) BOOL completions;
@property (nonatomic) BOOL completed;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)handleNotification:(id)a0;
- (id)initWithQueryString:(id)a0 attributes:(id)a1 scopes:(id)a2;

@end
