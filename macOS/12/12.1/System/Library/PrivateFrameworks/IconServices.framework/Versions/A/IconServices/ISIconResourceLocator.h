@class NSURL, NSString, NSDictionary;

@interface ISIconResourceLocator : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSURL *resourceDirectoryURL;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSDictionary *iconsDictionary;
@property (copy) NSString *preferedResourceName;
@property (readonly) BOOL allowLocalizedIcon;

+ (id)resourceLocatorWithLSIconResourceLocator:(id)a0;
+ (id)resourceLocatorWithType:(id)a0;
+ (id)genericIconrResourceLocator;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowLocalizedIcon;

@end
