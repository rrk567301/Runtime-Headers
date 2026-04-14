@class NSData;

@interface AVB17221AECPAEMAuthenticateCommand : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) NSData *token;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingToken;

- (id)token;
- (void)setToken:(id)a0;
- (id)init;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
