@class NSString, NSDecimalNumber;

@interface PKAccountPromotionCompletionStep : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long progressType;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSDecimalNumber *endValue;
@property (retain, nonatomic) NSDecimalNumber *currentValue;
@property (nonatomic) char completed;

+ (id)completionStepsFromDictionaries:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_initWithCompletionStepDictionary:(id)a0 index:(long long)a1;
- (id)initWithDictionary:(id)a0 index:(long long)a1;
- (char)isEqualToAccountPromotionCompletionStep:(id)a0;

@end
