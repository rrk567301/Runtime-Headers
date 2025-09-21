@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate

@property (readonly, nonatomic) long long minimumAge;
@property (nonatomic) BOOL disallowCurrentYear;

- (BOOL)isBuiltIn;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)updateWithConfiguration:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;

@end
