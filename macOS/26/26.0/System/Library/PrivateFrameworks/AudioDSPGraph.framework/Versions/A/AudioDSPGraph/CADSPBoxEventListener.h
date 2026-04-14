@interface CADSPBoxEventListener : NSObject <NSCopying> {
    struct shared_ptr<AudioDSPGraph::BoxEventHandlerTree> { struct BoxEventHandlerTree *__ptr_; struct __shared_weak_count *__cntrl_; } _eventHandlerTree;
    struct shared_ptr<CA::DSP::BoxEventHandler> { struct BoxEventHandler *__ptr_; struct __shared_weak_count *__cntrl_; } _eventHandler;
}

@property (copy, nonatomic) id /* block */ processPCMDataCallback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)processPCMDataCallback;
- (void)setProcessPCMDataCallback:(id /* block */)a0;

@end
