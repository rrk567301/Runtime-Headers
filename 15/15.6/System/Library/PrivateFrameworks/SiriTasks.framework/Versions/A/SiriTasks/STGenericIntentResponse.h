@interface STGenericIntentResponse : AFSiriResponse

@property (nonatomic) long long responseCode;

+ (char)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
