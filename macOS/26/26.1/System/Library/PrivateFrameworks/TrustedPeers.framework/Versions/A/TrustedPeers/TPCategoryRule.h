@class NSString;

@interface TPCategoryRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *category;

+ (id)ruleWithPrefix:(id)a0 category:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCategoryRule:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
