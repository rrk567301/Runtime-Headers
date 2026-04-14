@class NSString, NSURL;

@interface ASDBundle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *URL;

+ (id)bundleWithProvider:(id)a0;
+ (id)bundleWithIdentifier:(id)a0 URL:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (id)initWithIdentifier:(id)a0 URL:(id)a1;

@end
