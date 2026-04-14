@class NSString;

@interface CTBundle : NSObject <CTXPCLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBundleType:(long long)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
