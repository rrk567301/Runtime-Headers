@interface ATXSecureCodedTuple : _PASTuple2 <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowedClassNames;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
