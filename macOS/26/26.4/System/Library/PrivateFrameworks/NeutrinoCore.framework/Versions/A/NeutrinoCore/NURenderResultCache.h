@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderResultCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_cache;
}

+ (id)shared;

- (void)setResult:(id)a0 forJob:(id)a1;
- (void)flush;
- (void).cxx_destruct;
- (id)resultForJob:(id)a0;
- (id)init;

@end
