@class NSString, NSDictionary;

@interface HDDemoDataFoodObject : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *genericName;
@property (nonatomic) long long foodType;
@property (copy, nonatomic) NSDictionary *nutritionFacts;
@property (nonatomic) double recommendedNumServings;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBrandName:(id)a0 genericName:(id)a1 foodType:(long long)a2 nutritionFacts:(id)a3;

@end
