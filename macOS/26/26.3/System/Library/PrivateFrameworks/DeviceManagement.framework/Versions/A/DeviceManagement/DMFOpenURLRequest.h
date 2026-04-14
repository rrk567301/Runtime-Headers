@class NSURL, NSString, NSArray;

@interface DMFOpenURLRequest : DMFTaskRequest

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *URLDisplayName;
@property (nonatomic) BOOL lockInApp;
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers;

+ (id)permittedPlatforms;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
