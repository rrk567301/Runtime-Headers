@class NSString;

@interface WBSSandboxGenericExtension : WBSSandboxExtension {
    struct optional<long long> { union { char __null_state_; long long __val_; } ; BOOL __engaged_; } _handle;
}

@property (readonly, copy, nonatomic) NSString *extensionToken;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)releaseResource;
- (BOOL)consumeResource;
- (id)initWithURL:(id)a0 extensionToken:(id)a1;

@end
