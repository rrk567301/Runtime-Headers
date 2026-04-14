@class NSString;

@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithType:(id)a0;
- (BOOL)allowLocalizedIcon;
- (id)resourceDirectoryURL;
- (id)preferedResourceName;

@end
