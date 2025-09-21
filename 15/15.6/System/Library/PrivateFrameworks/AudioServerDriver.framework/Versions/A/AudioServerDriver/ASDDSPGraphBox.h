@class NSString;

@interface ASDDSPGraphBox : NSObject {
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
}

@property (readonly, nonatomic) void *box;
@property (readonly, nonatomic) long long numInputs;
@property (readonly, nonatomic) long long numOutputs;
@property (readonly, nonatomic) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithBox:(void *)a0 fromGraph:(struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; })a1;
- (char)getParameterInfo:(struct AudioUnitParameterInfo { char x0[52]; struct __CFString *x1; unsigned int x2; struct __CFString *x3; unsigned int x4; float x5; float x6; float x7; unsigned int x8; } *)a0 forID:(unsigned int)a1 inScope:(unsigned int)a2;
- (char)getParameter:(float *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3;
- (char)getParameterList:(unsigned int *)a0 numParameterIDs:(long long *)a1 inScope:(unsigned int)a2;
- (char)hasParameter:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
- (char)setParameter:(float)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 bufferOffset:(long long)a4;
- (char)startInjectingPort:(long long)a0 toFile:(id)a1 shouldLoop:(char)a2;
- (char)startRecordingPort:(long long)a0 toFile:(id)a1;
- (char)startRecordingPort:(long long)a0 toFile:(id)a1 withAudioCapturerOptions:(unsigned long long)a2;
- (char)stopInjectingPort:(long long)a0;
- (char)stopRecordingPort:(long long)a0;

@end
