@interface WBSSingleCreditCardData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL isVirtualCard;

+ (id)stringForSingleCreditCardDataType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0 type:(long long)a1;

@end
