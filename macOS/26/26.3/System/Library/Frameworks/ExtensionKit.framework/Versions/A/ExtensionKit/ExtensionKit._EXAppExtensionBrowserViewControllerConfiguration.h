@class NSArray;

@interface ExtensionKit._EXAppExtensionBrowserViewControllerConfiguration : NSObject <NSSecureCoding> {
    void /* function */ extensionPointIdentifiers;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSArray *extensionPointIdentifiers;
@property (nonatomic) long long options;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
