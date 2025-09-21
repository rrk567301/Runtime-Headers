@class NSURL, NSString, NSArray;

@interface CRKOpenURLRequest : CATTaskRequest

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *URLDisplayName;
@property (nonatomic) char lockInApp;
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
