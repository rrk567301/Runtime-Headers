@class NSString, NSData, NSDictionary;

@interface _DPDediscoDonation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSData *share1;
@property (copy, nonatomic) NSData *share2;
@property (nonatomic) long long dimension;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSString *serverAlgorithm;
@property (copy, nonatomic) NSDictionary *algorithmParameters;

+ (char)defaultValueForKey:(id)a0;
+ (id)requiredClasses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getHelperServerName;
- (id)getLeaderServerName;
- (id)initWithKey:(id)a0 share1:(id)a1 share2:(id)a2 dimension:(long long)a3 metadata:(id)a4 serverAlgorithm:(id)a5 algorithmParameters:(id)a6;
- (char)isFeatureEnabled:(id)a0 withError:(id *)a1;
- (char)isOHTTPEnabledWithError:(id *)a0;
- (char)isPrivateAccessTokenEnabledWithError:(id *)a0;
- (char)isTelemetryAllowed;

@end
