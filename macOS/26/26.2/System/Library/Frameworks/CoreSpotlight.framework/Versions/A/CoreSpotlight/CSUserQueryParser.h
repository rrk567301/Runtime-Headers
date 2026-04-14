@class NSObject;
@protocol OS_dispatch_queue;

@interface CSUserQueryParser : NSObject {
    NSObject<OS_dispatch_queue> *_preheatQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)_CSQueryCreateQueryDictionaryWithOptionsDict:(id)a0 attribute:(id)a1 input:(id)a2 options:(unsigned int)a3;
- (void)_CSUserQueryCancelQueryWithReferenceDict:(id)a0;
- (void)_CSUserQueryCooldown;
- (void)_CSUserQueryPreheat;
- (void)_CSUserQueryPreheatWithOptionsDict:(id)a0;
- (id)_CSUserQueryQPResourcesInfo;

@end
