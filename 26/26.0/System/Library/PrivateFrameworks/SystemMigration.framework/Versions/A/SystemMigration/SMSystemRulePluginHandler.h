@class NSURL, SMSystemRulePlugin, SMMigrationRequest;

@interface SMSystemRulePluginHandler : NSObject

@property (retain, nonatomic) NSURL *toolPath;
@property (retain, nonatomic) SMMigrationRequest *request;
@property (retain, nonatomic) SMSystemRulePlugin *plugin;

- (BOOL)cancel;
- (id)loadPlugin;
- (void).cxx_destruct;
- (BOOL)executePluginWithTimeout:(double)a0;
- (long long)getPluginDataSize;
- (id)initWithToolPath:(id)a0 request:(id)a1;
- (id)loadPlugin:(id)a0 forRequest:(id)a1;

@end
