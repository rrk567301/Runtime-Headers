@interface WBSSingleCreditCardData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) long long type;
@property (nonatomic) char isVirtualCard;

+ (id)stringForSingleCreditCardDataType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 type:(long long)a1;

@end
