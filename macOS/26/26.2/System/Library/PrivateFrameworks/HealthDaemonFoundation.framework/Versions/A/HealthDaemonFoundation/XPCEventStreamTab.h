@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface XPCEventStreamTab : NSObject

@property (readonly, copy, nonatomic) NSString *stream;
@property (readonly, weak, nonatomic) NSObject *object;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithStream:(id)a0 object:(id)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
