@class NSArray, CADSPBoxModel, NSMutableArray;

@interface CADSPBox : NSObject <RPBItemDelegate> {
    struct shared_ptr<AudioDSPGraph::Box> { struct Box *__ptr_; struct __shared_weak_count *__cntrl_; } _this;
    CADSPBoxModel *_model;
    NSMutableArray *_eventListeners;
}

@property (readonly, nonatomic) NSArray *eventListeners;
@property (readonly, nonatomic) CADSPBoxModel *model;

+ (void)initialize;

- (id)model;
- (void)addEventListener:(id)a0;
- (id).cxx_construct;
- (void)removeEventListener:(id)a0;
- (void).cxx_destruct;
- (id)eventListeners;
- (BOOL)getAudioComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0;
- (BOOL)getParameter:(float *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 error:(id *)a4;
- (BOOL)getPropertyData:(void *)a0 size:(unsigned int *)a1 forID:(unsigned int)a2 scope:(unsigned int)a3 element:(unsigned int)a4 error:(id *)a5;
- (BOOL)getPropertyInfo:(struct CADSPPropertyInfo { unsigned int x0; unsigned int x1; } *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 error:(id *)a4;
- (BOOL)getRemoteProcessingBlockParameter:(float *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (BOOL)getRemoteProcessingBlockParameterInfo:(id)a0 forScope:(unsigned int)a1 object:(id)a2 withError:(id *)a3;
- (BOOL)getRemoteProcessingBlockPropertyData:(void *)a0 size:(unsigned long long *)a1 forID:(unsigned int)a2 scope:(unsigned int)a3 element:(unsigned int)a4 object:(id)a5 withError:(id *)a6;
- (BOOL)getRemoteProcessingBlockPropertyInfo:(id *)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (id)initWithBox:(struct shared_ptr<AudioDSPGraph::Box> { struct Box *x0; struct __shared_weak_count *x1; })a0 model:(id)a1;
- (id)initWithModel:(id)a0 error:(id *)a1;
- (void)removeAllEventListeners;
- (BOOL)setParameter:(float)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 error:(id *)a4;
- (BOOL)setPropertyData:(const void *)a0 size:(unsigned int)a1 forID:(unsigned int)a2 scope:(unsigned int)a3 element:(unsigned int)a4 error:(id *)a5;
- (BOOL)setRemoteProcessingBlockParameter:(float)a0 forID:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 object:(id)a4 withError:(id *)a5;
- (BOOL)setRemoteProcessingBlockPropertyData:(const void *)a0 size:(unsigned long long)a1 forID:(unsigned int)a2 scope:(unsigned int)a3 element:(unsigned int)a4 object:(id)a5 withError:(id *)a6;

@end
