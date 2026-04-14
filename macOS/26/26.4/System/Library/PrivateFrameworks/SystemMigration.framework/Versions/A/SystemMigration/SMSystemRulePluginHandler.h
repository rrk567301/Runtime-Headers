@class SMSystemRulePlugin, NSURL, NSObject, SMMigrationRequest;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SMSystemRulePluginHandler : NSObject

@property (retain, nonatomic) NSURL *toolPath;
@property (retain, nonatomic) SMMigrationRequest *request;
@property (retain, nonatomic) SMSystemRulePlugin *plugin;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pluginSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pluginQueue;

- (id)loadPlugin;
- (BOOL)cancel;
- (void).cxx_destruct;
- (BOOL)executePluginWithCompletion;
- (BOOL)executePluginWithTimeout:(double)a0;
- (BOOL)finishWaitingForPlugin;
- (long long)getPluginDataSize;
- (id)initWithToolPath:(id)a0 request:(id)a1;
- (id)loadPlugin:(id)a0 forRequest:(id)a1;

@end
