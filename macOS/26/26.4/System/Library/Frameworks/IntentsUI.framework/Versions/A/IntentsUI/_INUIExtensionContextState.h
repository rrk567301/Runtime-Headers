@class NSDictionary, NSArray;

@interface _INUIExtensionContextState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *hostedViewMinimumAllowedSizes;
@property (copy, nonatomic) NSDictionary *hostedViewMaximumAllowedSizes;
@property (copy, nonatomic) NSArray *interfaceSections;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;

@end
