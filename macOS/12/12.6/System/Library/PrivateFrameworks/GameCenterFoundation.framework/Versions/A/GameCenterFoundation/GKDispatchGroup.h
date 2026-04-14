@class GKThreadsafeDictionary, NSString, NSError, NSObject, GKActivity;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    id result;
    int _sequence;
}

@property (retain) GKActivity *activity;
@property (retain) NSError *error;
@property (retain) id result;
@property (nonatomic, getter=isLoggingEnabled) BOOL loggingEnabled;

+ (id)mainQueue;
+ (void)waitUntilDone:(id /* block */)a0;
+ (id)dispatchGroup;
+ (id)dispatchGroupWithName:(id)a0;
+ (id)defaultConcurrentQueue;
+ (id)backgroundConcurrentQueue;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (id)_values;
- (id)allValues;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithName:(id)a0;
- (void)wait;
- (void)perform:(id /* block */)a0;
- (long long)waitWithTimeout:(double)a0;
- (void)enter;
- (void)leave;
- (void)notifyOnMainQueueWithBlock:(id /* block */)a0;
- (void)notifyOnQueue:(id)a0 block:(id /* block */)a1;
- (long long)_waitWithDispatchTimeout:(unsigned long long)a0;
- (void)join:(id)a0 queue:(id)a1 block:(id /* block */)a2;

@end
