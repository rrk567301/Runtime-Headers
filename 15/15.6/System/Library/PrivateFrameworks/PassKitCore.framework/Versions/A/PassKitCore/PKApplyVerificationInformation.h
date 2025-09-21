@class NSString, NSArray;

@interface PKApplyVerificationInformation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSArray *trialDeposits;
@property (nonatomic) char skippedVerification;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
