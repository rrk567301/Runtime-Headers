@class NSData;

@interface AVB17221AECPAEMAuthenticateCommand : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) NSData *token;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingToken;

- (void)setToken:(id)a0;
- (id)init;
- (id)token;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
