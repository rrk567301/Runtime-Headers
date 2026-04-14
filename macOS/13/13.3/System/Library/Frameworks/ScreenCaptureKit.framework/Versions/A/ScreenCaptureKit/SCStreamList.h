@class NSMutableDictionary;

@interface SCStreamList : NSObject {
    NSMutableDictionary *_streamList;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _streamListLock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addStream:(id)a0;
- (BOOL)removeStream:(id)a0;
- (id)streamForStreamId:(id)a0;

@end
