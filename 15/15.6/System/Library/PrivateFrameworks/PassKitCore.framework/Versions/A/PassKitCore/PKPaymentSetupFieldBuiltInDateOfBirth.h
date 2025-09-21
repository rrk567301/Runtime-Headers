@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate

@property (readonly, nonatomic) long long minimumAge;
@property (nonatomic) char disallowCurrentYear;

- (char)isBuiltIn;
- (void)updateWithConfiguration:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (char)submissionStringMeetsAllRequirements;

@end
