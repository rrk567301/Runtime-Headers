@class INInformationUseCaseParameterValue;

@interface INInformationUseCaseParameter : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) INInformationUseCaseParameterValue *value;

- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)initWithCoder:(id)a0;

@end
