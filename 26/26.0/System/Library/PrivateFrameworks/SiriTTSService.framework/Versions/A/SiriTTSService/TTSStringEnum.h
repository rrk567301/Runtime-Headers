@class NSString;

@interface TTSStringEnum : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (readonly, nonatomic) NSString *string;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
