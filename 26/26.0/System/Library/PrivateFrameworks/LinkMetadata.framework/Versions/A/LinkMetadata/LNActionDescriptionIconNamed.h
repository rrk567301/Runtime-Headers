@class NSString, NSURL;

@interface LNActionDescriptionIconNamed : LNActionDescriptionIcon

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *bundleURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 bundleURL:(id)a1;

@end
