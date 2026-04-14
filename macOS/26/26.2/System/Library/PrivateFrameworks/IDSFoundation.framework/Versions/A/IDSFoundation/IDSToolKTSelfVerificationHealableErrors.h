@class NSArray, NSDictionary;

@interface IDSToolKTSelfVerificationHealableErrors : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property NSArray *accountHealableErrors;
@property NSDictionary *deviceIdToHealableErrors;
@property unsigned long long healableState;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
