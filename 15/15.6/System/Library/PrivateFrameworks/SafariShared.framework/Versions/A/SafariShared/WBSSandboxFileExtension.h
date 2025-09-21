@interface WBSSandboxFileExtension : WBSSandboxExtension

@property (readonly, nonatomic) long long permissions;

- (char)consumeResource;
- (void)releaseResource;
- (id)initWithURL:(id)a0 permissions:(long long)a1;

@end
