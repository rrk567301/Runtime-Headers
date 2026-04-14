@class NSString, NSDictionary;

@interface APPolicyData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *creativeIdentifier;
@property (retain) NSDictionary *policyValue;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToAPPolicyData:(id)a0;

@end
