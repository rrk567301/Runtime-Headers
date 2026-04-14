@class DIURL;

@interface PluginBackendXPC : BackendXPC

@property (readonly, nonatomic) DIURL *URL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 openMode:(int)a1;
- (const void *)pluginHeader;

@end
