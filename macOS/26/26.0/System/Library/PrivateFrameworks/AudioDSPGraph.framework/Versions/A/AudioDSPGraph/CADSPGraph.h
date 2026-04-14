@class NSArray, CADSPGraphModel, NSMutableArray;

@interface CADSPGraph : NSObject <RPBHostDelegate> {
    struct shared_ptr<AudioDSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
    CADSPGraphModel *_model;
    NSArray *_boxes;
    NSArray *_subsets;
    NSMutableArray *_eventListeners;
}

@property (readonly, nonatomic, getter=isInitialized) BOOL initialized;
@property (readonly, nonatomic) NSArray *eventListeners;
@property (readonly, nonatomic) CADSPGraphModel *model;
@property (readonly, copy, nonatomic) NSArray *boxes;
@property (readonly, copy, nonatomic) NSArray *subsets;

+ (void)initialize;

- (BOOL)reset:(id *)a0;
- (BOOL)uninitialize:(id *)a0;
- (id)model;
- (void)addEventListener:(id)a0;
- (id).cxx_construct;
- (void)removeEventListener:(id)a0;
- (void).cxx_destruct;
- (id)boxes;
- (BOOL)initialize:(id *)a0;
- (id)eventListeners;
- (BOOL)setModel:(id)a0 error:(id *)a1;
- (id)subsets;
- (BOOL)getRemoteProcessingBlockPropertyInfo:(id)a0 forScope:(unsigned int)a1 object:(id)a2 withError:(id *)a3;
- (BOOL)_hasRemoteProcessingBlockParameter:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2 error:(id *)a3;
- (BOOL)_hasRemoteProcessingBlockProperty:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2 error:(id *)a3;
- (BOOL)applyStrip:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (BOOL)applyStrip:(id)a0 type:(unsigned int)a1 withResourcePath:(id)a2 error:(id *)a3;
- (id)boxForName:(id)a0;
- (id)createRemoteProcessingBlockHost:(id *)a0;
- (void)enumerateParametersWithBlock:(id /* block */)a0;
- (void)enumeratePropertiesWithBlock:(id /* block */)a0;
- (id)exportRemoteProcessingBlockStrip:(unsigned int)a0 settings:(id)a1 object:(id)a2 error:(id *)a3;
- (BOOL)getLatency:(double *)a0 error:(id *)a1;
- (BOOL)getParameter:(float *)a0 forID:(unsigned int)a1 error:(id *)a2;
- (BOOL)getParameterDirection:(unsigned int *)a0 forID:(unsigned int)a1 error:(id *)a2;
- (BOOL)getPropertyData:(void *)a0 size:(unsigned int *)a1 forID:(unsigned int)a2 error:(id *)a3;
- (BOOL)getPropertyDirection:(unsigned int *)a0 forID:(unsigned int)a1 error:(id *)a2;
- (BOOL)getPropertyInfo:(struct CADSPPropertyInfo { unsigned int x0; unsigned int x1; } *)a0 forID:(unsigned int)a1 error:(id *)a2;
- (BOOL)getRemoteProcessingBlockParameter:(float *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (BOOL)getRemoteProcessingBlockParameterInfo:(id)a0 forScope:(unsigned int)a1 object:(id)a2 withError:(id *)a3;
- (BOOL)getRemoteProcessingBlockProperty:(id *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (BOOL)getRemoteProcessingBlockPropertyInfo:(id *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (BOOL)getStreamDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 forPort:(unsigned int)a1 direction:(unsigned int)a2;
- (BOOL)getTailTime:(double *)a0 error:(id *)a1;
- (BOOL)hasParameterForID:(unsigned int)a0;
- (BOOL)hasPropertyForID:(unsigned int)a0;
- (BOOL)importRemoteProcessingBlockStrip:(id)a0 type:(unsigned int)a1 settings:(id)a2 object:(id)a3 error:(id *)a4;
- (id)initWithModel:(id)a0 error:(id *)a1;
- (BOOL)loadStrip:(id)a0 type:(unsigned int)a1 error:(id *)a2;
- (BOOL)loadStrip:(id)a0 type:(unsigned int)a1 withResourcePath:(id)a2 error:(id *)a3;
- (void)removeAllEventListeners;
- (id)saveStrip:(unsigned int)a0 error:(id *)a1;
- (BOOL)setModel:(id)a0 dryRun:(BOOL)a1 error:(id *)a2;
- (BOOL)setParameter:(float)a0 forID:(unsigned int)a1 error:(id *)a2;
- (BOOL)setPropertyData:(const void *)a0 size:(unsigned int)a1 forID:(unsigned int)a2 error:(id *)a3;
- (BOOL)setRemoteProcessingBlockParameter:(float)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (BOOL)setRemoteProcessingBlockProperty:(id)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (id)subsetForName:(id)a0;

@end
