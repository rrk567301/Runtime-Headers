@class DIURL;

@interface PluginBackendXPC : BackendXPC

@property (readonly, nonatomic) DIURL *URL;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 openMode:(int)a1;
- (const void *)pluginHeader;

@end
