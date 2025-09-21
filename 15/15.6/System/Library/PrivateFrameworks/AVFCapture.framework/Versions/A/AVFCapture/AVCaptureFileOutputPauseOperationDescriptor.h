@class NSString;

@interface AVCaptureFileOutputPauseOperationDescriptor : NSObject <AVCaptureOperationDescriptor> {
    char _shouldPause;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationThatShouldPause:(char)a0;

@end
