@class NSDictionary;

@interface AMSEligibilityResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long answer;
@property (readonly) unsigned long long source;
@property (readonly) NSDictionary *status;
@property (readonly) NSDictionary *context;

+ (id)convertFromXPC:(id)a0;
+ (id)stringifiedAnswer:(unsigned long long)a0;
+ (id)stringifiedAnswerSource:(unsigned long long)a0;
+ (id)stringifiedInputStatus:(unsigned long long)a0;
+ (id)stringifiedInputStatusFromInt:(unsigned long long)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnswer:(unsigned long long)a0 source:(unsigned long long)a1 status:(id)a2 context:(id)a3;

@end
