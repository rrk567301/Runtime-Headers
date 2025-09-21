@interface AMSInt : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) int value;

+ (id)intWithInt:(int)a0;

- (char)isEqual:(id)a0;
- (id)initWithInt:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToInt:(id)a0;

@end
