@class NSURL;

@interface _VZVirtualMachineConfigurationEncoder : NSObject {
    NSURL *_baseURL;
}

- (id)initWithBaseURL:(id)a0;
- (void).cxx_destruct;
- (id)dataWithConfiguration:(id)a0 format:(unsigned long long)a1 error:(id *)a2;

@end
