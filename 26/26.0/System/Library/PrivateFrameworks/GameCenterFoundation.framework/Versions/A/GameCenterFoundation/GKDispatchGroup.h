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

+ (id)backgroundConcurrentQueue;
+ (id)dispatchGroupWithName:(id)a0;
+ (id)mainQueue;
+ (id)defaultConcurrentQueue;
+ (void)waitUntilDone:(id /* block */)a0;

- (id)objectForKeyedSubscript:(id)a0;
- (void)dealloc;
- (void)enter;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)wait;
- (long long)waitWithTimeout:(double)a0;
- (void)leave;
- (id)description;
- (void)notifyOnMainQueueWithBlock:(id /* block */)a0;
- (void)join:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (id)initWithName:(id)a0;
- (id)_values;
- (long long)_waitWithDispatchTimeout:(unsigned long long)a0;
- (id)allValues;
- (void)notifyOnQueue:(id)a0 block:(id /* block */)a1;
- (void)perform:(id /* block */)a0;

@end
