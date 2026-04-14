@class NSRunLoop, NSOperationQueue, NSObject, MIBUDeviceNFC;
@protocol OS_dispatch_queue, MIBUReaderServiceDelegate;

@interface MIBUReaderService : NSObject

@property (retain, nonatomic) id<MIBUReaderServiceDelegate> delegate;
@property (retain, nonatomic) MIBUDeviceNFC *device;
@property (retain, nonatomic) NSOperationQueue *serviceQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deviceQueue;
@property (retain, nonatomic) NSRunLoop *runLoop;

- (void)terminate;
- (void)start;
- (void)run;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
