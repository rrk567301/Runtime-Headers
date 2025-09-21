@class NSArray, NSString;

@interface AMPLibRequestPropertyFilter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long comparisonType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeys:(id)a0 value:(id)a1 comparisonType:(long long)a2;

@end
