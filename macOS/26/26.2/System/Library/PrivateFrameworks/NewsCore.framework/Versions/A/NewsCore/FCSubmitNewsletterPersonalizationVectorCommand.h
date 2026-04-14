@class NSString;

@interface FCSubmitNewsletterPersonalizationVectorCommand : FCCommand

@property (retain, nonatomic) NSString *personalizationVector;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithPersonalizationVector:(id)a0;

@end
