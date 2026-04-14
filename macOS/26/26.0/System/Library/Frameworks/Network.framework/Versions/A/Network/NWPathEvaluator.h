@class NWParameters, NWPath, NWEndpoint, NSObject;
@protocol OS_nw_path_evaluator;

@interface NWPathEvaluator : NSObject

@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator;
@property (retain) NWPath *internalPath;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NWPath *path;
@property (readonly, nonatomic) NWEndpoint *endpoint;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)sharedDefaultEvaluator;
+ (void)initialize;
+ (id)copySavedPathEvaluatorForEndpoint:(id)a0 parameters:(id)a1;
+ (void)savePathEvaluator:(id)a0;

- (id)copyPath;
- (void)dealloc;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (void)triggerPathAgentsIncludingVoluntary:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)init;
- (void)satisfyPathAgentsWithCompletionHandler:(id /* block */)a0;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(id /* block */)a0;
- (BOOL)requestNexus;
- (BOOL)matchesEndpoint:(id)a0 parameters:(id)a1;
- (id)initWithBrowseDescriptor:(id)a0 parameters:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEvaluator:(id)a0 parameters:(id)a1;
- (id)initWithListenParameters:(id)a0;

@end
