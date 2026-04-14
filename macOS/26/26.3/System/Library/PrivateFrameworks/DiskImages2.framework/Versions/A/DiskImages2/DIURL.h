@class NSString, NSDictionary;

@interface DIURL : NSURL

@property (readonly, nonatomic) NSString *pluginName;
@property (readonly, nonatomic) NSDictionary *pluginParams;
@property (readonly, nonatomic) BOOL isPlugin;

+ (BOOL)supportsSecureCoding;
+ (id)newDIURLWithNSURL:(id)a0;
+ (id)newDIURLWithPluginName:(id)a0 params:(id)a1;

- (id)description;
- (id)path;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPluginName:(id)a0 params:(id)a1;

@end
