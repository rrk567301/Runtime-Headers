@class NSString;

@interface _UISTouchAuthenticationVerifierResult : NSObject

@property (readonly, nonatomic) char passesSecurityAnalysis;
@property (readonly, nonatomic) NSString *failureReasons;

- (void).cxx_destruct;
- (id)initWithPassesSecurityAnalysis:(char)a0 failureReasons:(id)a1;

@end
