@class NSURL, NSData;

@interface MADCoreMLRequest : MADRequest {
    NSData *_extensionData;
}

@property (readonly, nonatomic) NSURL *modelURL;

+ (BOOL)supportsSecureCoding;
+ (id)requestWithModelURL:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0 error:(id *)a1;
- (id)_extensionData;
- (void)consumeSandboxExtension;

@end
