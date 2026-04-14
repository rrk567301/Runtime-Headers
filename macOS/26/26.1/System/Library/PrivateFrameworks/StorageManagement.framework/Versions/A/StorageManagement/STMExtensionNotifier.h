@class NSObject;
@protocol OS_dispatch_queue, STMExtensionNotifierDelegate;

@interface STMExtensionNotifier : NSObject

@property (retain) NSObject<OS_dispatch_queue> *serialAccessQueue;
@property (retain) id matchingContext;
@property (weak) id<STMExtensionNotifierDelegate> delegate;

- (void)start;
- (void)beginMatchingExtensions;
- (void)handleError:(id)a0;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (id)extensionMatchingAtrributes;
- (void)handleMatchingExtensions:(id)a0;
- (void)handleMatchingResponse:(id)a0 error:(id)a1;
- (void)stopMatchingExtensions;

@end
