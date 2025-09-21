@class NSMutableDictionary, NSMutableArray;

@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding> {
    NSMutableDictionary *_sandboxExtensions;
    NSMutableArray *_sandboxHandles;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) Class operationClass;
@property (readonly, nonatomic) long long operationPriority;

+ (BOOL)canConnectToMediaArtworkService;
+ (BOOL)hasWriteAccessToPath:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addSandboxExtensionIfNeededForURL:(id)a0;
- (void)consumeSandboxExtensions;
- (void)releaseSandboxExtensions;

@end
