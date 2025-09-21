@class NSString, NSArray;

@interface IDSKTVerificationResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *uri;
@property (nonatomic) char optedIn;
@property (retain, nonatomic) NSArray *verifiedPushTokens;
@property (retain, nonatomic) NSArray *unverifiedPushTokens;
@property (retain, nonatomic) NSArray *endpointTransparencyStates;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
