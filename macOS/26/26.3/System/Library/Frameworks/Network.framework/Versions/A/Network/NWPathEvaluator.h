@class NWParameters, NWPath, NWEndpoint, NSObject;
@protocol OS_nw_path_evaluator;

@interface NWPathEvaluator : NSObject

@property (readonly) NSObject<OS_nw_path_evaluator> *internalEvaluator;
@property (retain) NWPath *internalPath;
@property (readonly) NWParameters *parameters;
@property (readonly, nonatomic) NWPath *path;
@property (readonly, nonatomic) NWEndpoint *endpoint;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)initialize;
+ (id)sharedDefaultEvaluator;
+ (id)copySavedPathEvaluatorForEndpoint:(id)a0 parameters:(id)a1;
+ (void)savePathEvaluator:(id)a0;

- (id)initWithEvaluator:(id)a0;
- (id)initWithListenParameters:(id)a0;
- (BOOL)requestNexus;
- (id)init;
- (id)initWithBrowseDescriptor:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (void)triggerPathAgentsIncludingVoluntary:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (void)triggerVoluntaryPathAgentsWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)matchesEndpoint:(id)a0 parameters:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyPath;
- (void)satisfyPathAgentsWithCompletionHandler:(id /* block */)a0;

@end
