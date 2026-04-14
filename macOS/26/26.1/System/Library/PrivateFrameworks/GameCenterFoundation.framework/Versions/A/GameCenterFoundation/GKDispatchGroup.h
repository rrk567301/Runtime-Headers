@class GKThreadsafeDictionary, NSString, NSError, NSObject, GKActivity;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    id result;
    int _sequence;
}

@property (retain) GKActivity *activity;
@property (nonatomic, getter=isDebugLoggingEnabled) BOOL debugLoggingEnabled;
@property (retain) NSString *name;
@property (retain) NSError *error;
@property (retain) id result;

+ (void)waitUntilDone:(id /* block */)a0;
+ (id)dispatchGroupWithName:(id)a0;
+ (id)backgroundConcurrentQueue;
+ (id)mainQueue;
+ (id)defaultConcurrentQueue;

- (void)wait;
- (void)enter;
- (long long)waitWithTimeout:(double)a0;
- (void)notifyOnMainQueueWithBlock:(id /* block */)a0;
- (id)allValues;
- (id)_values;
- (void)join:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)description;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)dealloc;
- (void)notifyOnQueue:(id)a0 block:(id /* block */)a1;
- (id)initWithName:(id)a0;
- (long long)_waitWithDispatchTimeout:(unsigned long long)a0;
- (void)leave;
- (id)objectForKeyedSubscript:(id)a0;
- (void)perform:(id /* block */)a0;

@end
