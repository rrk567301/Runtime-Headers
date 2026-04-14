@class NSData;

@interface AVB17221AECPAEMAuthenticationAddTokenCommand : AVB17221AECPAEMMessage

@property (copy, nonatomic) NSData *token;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingToken;

- (void)setToken:(id)a0;
- (id)token;
- (id)init;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
