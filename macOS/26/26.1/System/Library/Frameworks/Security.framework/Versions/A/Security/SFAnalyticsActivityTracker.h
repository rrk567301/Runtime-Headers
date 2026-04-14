@class NSNumber, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SFAnalyticsActivityTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    Class _clientClass;
    unsigned long long _start;
    BOOL _canceled;
}

@property (retain) NSNumber *measurement;

- (void)start;
- (void)cancel;
- (void)dealloc;
- (void)stop;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stopWithEvent:(id)a0 result:(id)a1;
- (id)initWithName:(id)a0 clientClass:(Class)a1;

@end
