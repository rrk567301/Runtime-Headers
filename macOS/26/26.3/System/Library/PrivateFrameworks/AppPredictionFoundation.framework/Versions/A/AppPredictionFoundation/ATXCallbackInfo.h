@class NSObject;
@protocol OS_dispatch_queue;

@interface ATXCallbackInfo : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;

@end
