@class NSString, NSObject;
@protocol OS_dispatch_queue, SKDEventLogger, SKDModelContext;

@interface SKDModel : NSObject <SKDModel> {
    id<SKDModelContext> _context;
    id<SKDEventLogger> _logger;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _suspended;
}

@property (readonly, nonatomic) id<SKDEventLogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<SKDModelContext> context;
@property (readonly, nonatomic) long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resume;
- (BOOL)unload;
- (BOOL)load;
- (void)update;
- (void)suspend;
- (void).cxx_destruct;
- (BOOL)suspended;
- (void)loadWithCompletionHandler:(id /* block */)a0;
- (void)enumerateResultsWithInputs:(id)a0 options:(id)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)initWithContext:(id)a0 logger:(id)a1;
- (id)resultsWithInputs:(id)a0 options:(id)a1;
- (void)unloadWithCompletionHandler:(id /* block */)a0;

@end
