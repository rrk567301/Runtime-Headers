@class NSDate;

@interface LACDTOLocationState : NSObject

@property (readonly, nonatomic) char isInFamiliarLocation;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) char confirmed;
@property (readonly, nonatomic) long long rawValue;

+ (id)nullInstance;
+ (id)strictLocationState;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isValid:(id)a0;
- (id)initWithRawValue:(long long)a0 confirmed:(char)a1;
- (id)initWithRawValue:(long long)a0 confirmed:(char)a1 createdAt:(id)a2;

@end
