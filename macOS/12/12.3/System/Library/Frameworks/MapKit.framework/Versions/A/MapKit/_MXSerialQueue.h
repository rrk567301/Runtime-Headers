@class NSObject;
@protocol OS_dispatch_group;

@interface _MXSerialQueue : NSObject {
    NSObject<OS_dispatch_group> *_previousTaskGroup;
}

+ (id)taskInsertionQueue;
+ (id)taskCompletionQueue;
+ (id)taskQueue;

- (id)init;
- (void).cxx_destruct;
- (void)addTask:(id /* block */)a0;

@end
