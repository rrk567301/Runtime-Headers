@class NSObject;
@protocol OS_dispatch_queue, IDSServiceDelegate;

@interface PKIDSServiceDelegateEntry : NSObject

@property (readonly, weak, nonatomic) id<IDSServiceDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
