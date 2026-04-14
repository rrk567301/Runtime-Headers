@class NSString;

@interface LiveCommunicationKit.SandboxExtendedURL : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ sandboxExtensionHandle;
    void /* unknown type, empty encoding */ sandboxExtensionToken;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
