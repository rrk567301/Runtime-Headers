@class AXFDispatchQueue;
@protocol _AXFLaunchServicesProviderDelegate;

@interface _AXFLaunchServicesProvider : NSObject

@property (readonly, weak) id<_AXFLaunchServicesProviderDelegate> delegate;
@property (readonly) AXFDispatchQueue *delegateQueue;

+ (id)newSystemLaunchServicesProviderWithDelegate:(id)a0 delegateQueue:(id)a1;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (id)newApplicationWithProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (void)startObservingApplications;
- (void)stopObservingApplications;
- (struct { struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } x0; struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } x1; })keyboardProcessSerialNumber;
- (BOOL)isProcessSerialNumberPermittedFrontmost:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;
- (id)copyRunningApplications;

@end
