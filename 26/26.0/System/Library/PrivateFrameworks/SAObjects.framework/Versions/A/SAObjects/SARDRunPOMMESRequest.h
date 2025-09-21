@class NSString, SASRecognition, NSData, SASelectedUserAttributes;

@interface SARDRunPOMMESRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *nlFallbackParse;
@property (copy, nonatomic) NSData *nlUserParses;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *requestType;
@property (copy, nonatomic) NSString *responseVariantResult;
@property (retain, nonatomic) SASelectedUserAttributes *selectedUserAttributes;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userIdentityClassification;
@property (copy, nonatomic) NSString *utterance;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
