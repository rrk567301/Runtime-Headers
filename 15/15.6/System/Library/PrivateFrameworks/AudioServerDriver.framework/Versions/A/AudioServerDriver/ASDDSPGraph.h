@class NSString, NSSet;

@interface ASDDSPGraph : NSObject

@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } graph;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long numberOfInputs;
@property (readonly, nonatomic) unsigned long long numberOfOutputs;
@property (readonly, nonatomic) long long sliceDurationInSamples;
@property (readonly, nonatomic) char configured;
@property (readonly, nonatomic) char initialized;
@property (readonly, nonatomic) NSSet *boxes;
@property (readonly, nonatomic) NSSet *inputs;
@property (readonly, nonatomic) NSSet *outputs;

- (id)init;
- (char)initialize;
- (void).cxx_destruct;
- (id).cxx_construct;
- (char)reset;
- (char)configure;
- (char)unconfigure;
- (id)initWithDSPGraph:(struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; })a0;
- (id)boxWithName:(id)a0;
- (char)getParameter:(float *)a0 forID:(unsigned int)a1;
- (char)getProperty:(void *)a0 withSize:(unsigned int *)a1 forID:(unsigned int)a2;
- (char)getPropertySize:(unsigned int *)a0 isWritable:(char *)a1 forID:(unsigned int)a2;
- (char)hasParameter:(unsigned int)a0;
- (char)setAUStrip:(id)a0;
- (char)setParameter:(float)a0 forID:(unsigned int)a1;
- (char)setProperty:(const void *)a0 withSize:(unsigned int)a1 forID:(unsigned int)a2;
- (char)setPropertyStrip:(id)a0;
- (char)setVariableSliceDuration:(long long)a0 forSampleRate:(long long)a1;
- (char)uninitialize;

@end
