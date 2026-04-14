@class NSString;

@interface HKClinicalCoding : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *system;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *code;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSystem:(id)a0 version:(id)a1 code:(id)a2;

@end
