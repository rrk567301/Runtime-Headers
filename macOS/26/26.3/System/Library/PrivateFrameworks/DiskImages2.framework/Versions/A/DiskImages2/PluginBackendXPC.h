@class DIURL;

@interface PluginBackendXPC : BackendXPC

@property (readonly, nonatomic) DIURL *URL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 openMode:(int)a1;
- (const void *)pluginHeader;

@end
