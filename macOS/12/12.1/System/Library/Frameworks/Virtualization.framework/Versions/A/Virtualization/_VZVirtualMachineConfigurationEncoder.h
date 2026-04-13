@class NSURL;

@interface _VZVirtualMachineConfigurationEncoder : NSObject {
    NSURL *_baseURL;
}

- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)dataWithConfiguration:(id)a0 error:(id *)a1;
- (struct expected<NSString *, NSError *> { union storage<NSString *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })relativePathForURL:(id)a0;

@end
