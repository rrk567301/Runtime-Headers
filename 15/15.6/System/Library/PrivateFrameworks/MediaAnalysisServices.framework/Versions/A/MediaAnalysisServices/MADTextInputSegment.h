@interface MADTextInputSegment : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
