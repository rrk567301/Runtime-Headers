@class _ANEDeviceController, NSObject;
@protocol OS_dispatch_semaphore;

@interface _ANEProgramForEvaluation : NSObject

@property (readonly, nonatomic) _ANEDeviceController *controller;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (readonly, nonatomic) char queueDepth;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *requestsInFlight;
@property long long currentAsyncRequestsInFlight;

+ (id)new;
+ (id)programWithController:(id)a0 intermediateBufferHandle:(unsigned long long)a1 queueDepth:(char)a2;
+ (id)programWithHandle:(unsigned long long)a0 intermediateBufferHandle:(unsigned long long)a1 queueDepth:(char)a2;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithController:(id)a0 intermediateBufferHandle:(unsigned long long)a1 queueDepth:(char)a2;
- (char)processInputBuffers:(id)a0 model:(id)a1 options:(id)a2 error:(id *)a3;
- (char)processOutputSet:(id)a0 model:(id)a1 options:(id)a2 error:(id *)a3;
- (char)processRequest:(id)a0 model:(id)a1 qos:(unsigned int)a2 qIndex:(unsigned long long)a3 modelStringID:(unsigned long long)a4 options:(id)a5 returnValue:(unsigned int *)a6 error:(id *)a7;
- (char)processSessionHint:(id)a0 options:(id)a1 report:(id)a2 error:(id *)a3;
- (id)programInferenceOtherErrorForMessage:(struct ANENotificationMessageStruct { int x0; int x1; void *x2; void *x3[4]; unsigned int x4[4]; } *)a0 model:(id)a1 methodName:(id)a2;

@end
