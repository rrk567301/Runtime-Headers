@class NSObject;
@protocol OS_dispatch_group;

@interface _MXSerialQueue : NSObject {
    NSObject<OS_dispatch_group> *_previousTaskGroup;
}

+ (id)taskQueue;
+ (id)taskCompletionQueue;
+ (id)taskInsertionQueue;

- (void).cxx_destruct;
- (void)addTask:(id /* block */)a0;
- (id)init;

@end
