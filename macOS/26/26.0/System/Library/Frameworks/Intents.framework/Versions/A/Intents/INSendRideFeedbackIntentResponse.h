@interface INSendRideFeedbackIntentResponse : INIntentResponse

@property (readonly) long long code;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
