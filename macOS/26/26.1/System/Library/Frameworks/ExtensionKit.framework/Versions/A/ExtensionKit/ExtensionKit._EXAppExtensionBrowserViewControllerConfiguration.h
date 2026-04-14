@class NSArray;

@interface ExtensionKit._EXAppExtensionBrowserViewControllerConfiguration : NSObject <NSSecureCoding> {
    void /* function */ extensionPointIdentifiers;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSArray *extensionPointIdentifiers;
@property (nonatomic) long long options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
