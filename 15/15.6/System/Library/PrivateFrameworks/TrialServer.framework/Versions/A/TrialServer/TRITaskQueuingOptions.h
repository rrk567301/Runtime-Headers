@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long duplicateTaskResolution;

+ (id)defaultOptionsWithIgnoreDuplicates;
+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToOptions:(id)a0;
- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)a0;
- (void)defaultEncodeWithCoder:(id)a0;
- (id)initWithDuplicateTaskResolution:(unsigned long long)a0;

@end
