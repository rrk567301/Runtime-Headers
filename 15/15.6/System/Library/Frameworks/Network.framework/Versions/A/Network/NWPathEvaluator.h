@class NWParameters, NWPath, NWEndpoint, NSObject;
@protocol OS_nw_path_evaluator;

@interface NWPathEvaluator : NSObject

@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator;
@property (retain) NWPath *internalPath;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NWPath *path;
@property (readonly, nonatomic) NWEndpoint *endpoint;

+ (void)initialize;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)copySavedPathEvaluatorForEndpoint:(id)a0 parameters:(id)a1;
+ (void)savePathEvaluator:(id)a0;
+ (id)sharedDefaultEvaluator;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyPath;
- (id)initWithBrowseDescriptor:(id)a0 parameters:(id)a1;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (id)initWithEvaluator:(id)a0 parameters:(id)a1;
- (id)initWithListenParameters:(id)a0;
- (char)matchesEndpoint:(id)a0 parameters:(id)a1;
- (char)requestNexus;
- (void)satisfyPathAgentsWithCompletionHandler:(id /* block */)a0;
- (void)triggerPathAgentsIncludingVoluntary:(char)a0 withCompletionHandler:(id /* block */)a1;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(id /* block */)a0;

@end
