@class NSURL, NSString, NSDictionary;

@interface ISIconResourceLocator : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSURL *resourceDirectoryURL;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSDictionary *iconsDictionary;
@property (copy) NSString *preferedResourceName;
@property (readonly) char allowLocalizedIcon;

+ (id)genericIconrResourceLocator;
+ (id)resourceLocatorWithLSIconResourceLocator:(id)a0;
+ (id)resourceLocatorWithType:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)allowLocalizedIcon;

@end
