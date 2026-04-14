@interface STGenericIntentResponse : AFSiriResponse

@property (nonatomic) long long responseCode;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
