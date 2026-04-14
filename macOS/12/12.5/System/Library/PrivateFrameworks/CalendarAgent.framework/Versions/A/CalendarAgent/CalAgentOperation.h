@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CalAgentOperation : NSObject

@property (retain, nonatomic) NSDictionary *inputPayload;
@property (retain, nonatomic) NSDictionary *responsePayload;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (Class)operationHandled;

- (void).cxx_destruct;
- (void)start;
- (void)finishOperation;
- (BOOL)isSerialOperation;
- (id)initWithInputPayload:(id)a0;

@end
