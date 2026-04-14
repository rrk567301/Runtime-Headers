@class GKThreadsafeDictionary, NSString, NSError, NSObject, GKActivity;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    int _sequence;
}

@property (retain) GKActivity *activity;
@property (nonatomic, getter=isDebugLoggingEnabled) BOOL debugLoggingEnabled;
@property (retain) NSString *name;
@property (retain) NSError *error;
@property (retain) id result;

+ (id)dispatchGroupWithName:(id)a0;
+ (void)waitUntilDone:(id /* block */)a0;
+ (id)mainQueue;
+ (id)defaultConcurrentQueue;
+ (id)backgroundConcurrentQueue;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)join:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (long long)waitWithTimeout:(double)a0;
- (id)description;
- (void)leave;
- (id)initWithName:(id)a0;
- (id)allValues;
- (void)perform:(id /* block */)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)_values;
- (long long)_waitWithDispatchTimeout:(unsigned long long)a0;
- (void)dealloc;
- (void)enter;
- (void)wait;
- (void)notifyOnQueue:(id)a0 block:(id /* block */)a1;
- (void)notifyOnMainQueueWithBlock:(id /* block */)a0;

@end
