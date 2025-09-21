@class NSString, NSDictionary;

@interface APPolicyData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *creativeIdentifier;
@property (retain) NSDictionary *policyValue;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAPPolicyData:(id)a0;

@end
