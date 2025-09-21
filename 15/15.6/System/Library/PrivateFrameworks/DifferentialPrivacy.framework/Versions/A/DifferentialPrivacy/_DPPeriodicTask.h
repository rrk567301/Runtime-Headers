@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _DPPeriodicTask : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *executionCriteria;
@property (readonly, nonatomic) unsigned long long periodSeconds;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char networkingRequired;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)taskWithName:(id)a0 period:(unsigned long long)a1 handler:(id /* block */)a2;
+ (id)taskWithName:(id)a0 period:(unsigned long long)a1 handler:(id /* block */)a2 networkingRequired:(char)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 period:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)initWithName:(id)a0 period:(unsigned long long)a1 handler:(id /* block */)a2 networkingRequired:(char)a3;

@end
