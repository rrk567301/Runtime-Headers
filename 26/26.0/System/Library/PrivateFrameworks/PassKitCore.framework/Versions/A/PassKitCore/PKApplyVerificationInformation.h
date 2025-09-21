@class NSString, NSArray;

@interface PKApplyVerificationInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSArray *trialDeposits;
@property (nonatomic) BOOL skippedVerification;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
