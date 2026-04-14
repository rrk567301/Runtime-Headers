@class NSArray, NSMutableDictionary, NWParameters, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_evaluator;

@interface NWCandidatePathMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *primaryEvaluator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *remoteEndpoints;
@property (retain, nonatomic) NSMutableDictionary *candidatePathEvaluators;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (readonly, nonatomic) NWParameters *parameters;
@property (readonly, nonatomic) NSArray *interfaces;
@property (readonly, nonatomic) NSArray *candidatePaths;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (void)cancelCandidatePathEvaluators;
- (id)cParameters;
- (void)resetCandidatePathEvaluators;
- (id)interfacesLocked;
- (void)startWithQueue:(id)a0 updateHandler:(id /* block */)a1;
- (void)cancelWithHandler:(id /* block */)a0;
- (void)updateRemoteEndpoints:(id)a0;

@end
