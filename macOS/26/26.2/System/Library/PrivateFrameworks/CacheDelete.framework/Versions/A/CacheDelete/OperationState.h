@class NSObject;
@protocol OS_dispatch_queue;

@interface OperationState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL operationCancelled;
@property int operationRefcount;

- (BOOL)begin;
- (void)cancel;
- (BOOL)cancelled;
- (void)end;
- (void).cxx_destruct;
- (id)init;

@end
