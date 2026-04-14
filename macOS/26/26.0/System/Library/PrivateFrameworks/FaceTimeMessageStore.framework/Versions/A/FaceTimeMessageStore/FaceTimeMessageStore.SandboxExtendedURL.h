@class NSString;

@interface FaceTimeMessageStore.SandboxExtendedURL : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ sandboxExtensionHandle;
    void /* unknown type, empty encoding */ sandboxExtensionToken;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
