@class NSString, NSURL;

@interface ASDBundle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *URL;

+ (id)bundleWithIdentifier:(id)a0 URL:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 URL:(id)a1;

@end
