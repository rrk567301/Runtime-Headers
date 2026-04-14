@interface WBSSandboxFileExtension : WBSSandboxExtension

@property (readonly, nonatomic) long long permissions;

- (void)releaseResource;
- (BOOL)consumeResource;
- (id)initWithURL:(id)a0 permissions:(long long)a1;

@end
