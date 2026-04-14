@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate

@property (readonly, nonatomic) long long minimumAge;
@property (nonatomic) BOOL disallowCurrentYear;

- (void)updateWithConfiguration:(id)a0;
- (BOOL)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)submissionStringMeetsAllRequirements;

@end
