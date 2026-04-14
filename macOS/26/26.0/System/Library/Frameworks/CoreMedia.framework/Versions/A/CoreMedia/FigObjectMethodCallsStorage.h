@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface FigObjectMethodCallsStorage : NSObject {
    NSMutableDictionary *_objectMethodCalls;
    NSObject<OS_dispatch_queue> *_objectMethodCallsUpdateQueue;
}

+ (id)shared;
+ (void)recordForObject:(id)a0 withMethodEnum:(id)a1;
+ (void)surfaceMethodCallsBeforeCrashForObject:(id)a0;

- (void)dealloc;
- (id)init;
- (id)description;
- (void)checkAndflushObjectMethodCalls;
- (void)surfaceMethodCallsBeforeCrashForStringObjectPtr:(id)a0;
- (void)updateMethodCallsForObject:(id)a0 withMethodEnum:(id)a1;

@end
