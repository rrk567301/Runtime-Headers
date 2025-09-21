@class NSURL, NSString, NSArray;

@interface DMFOpenURLRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *URLDisplayName;
@property (nonatomic) char lockInApp;
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
