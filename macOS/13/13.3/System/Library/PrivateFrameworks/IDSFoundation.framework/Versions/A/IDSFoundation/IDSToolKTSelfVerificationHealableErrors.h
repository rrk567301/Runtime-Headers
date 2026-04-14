@class NSArray, NSDictionary;

@interface IDSToolKTSelfVerificationHealableErrors : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *accountHealableErrors;
@property (retain) NSDictionary *deviceIdToHealableErrors;
@property unsigned long long healableState;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
