@interface INInformationUseCaseParameterValue : INObject

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
