@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderResultCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cache;
}

+ (id)shared;

- (id)init;
- (void)flush;
- (void)setResult:(id)a0 forJob:(id)a1;
- (id)resultForJob:(id)a0;
- (void).cxx_destruct;

@end
