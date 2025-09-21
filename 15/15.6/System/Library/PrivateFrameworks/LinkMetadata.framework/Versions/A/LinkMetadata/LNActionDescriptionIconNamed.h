@class NSString, NSURL;

@interface LNActionDescriptionIconNamed : LNActionDescriptionIcon

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *bundleURL;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 bundleURL:(id)a1;

@end
