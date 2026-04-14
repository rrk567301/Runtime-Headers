@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long duplicateTaskResolution;

+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)a0;
+ (id)defaultOptionsWithIgnoreDuplicates;

- (BOOL)isEqualToOptions:(id)a0;
- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)a0;
- (id)description;
- (id)init;
- (id)initWithDuplicateTaskResolution:(unsigned long long)a0;
- (void)defaultEncodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
