@class NSString;

@interface ProfileAuthenticationMessage : ProfileMessage <NSCopying>

@property (copy) NSString *username;
@property (copy) NSString *password;
@property (copy) NSString *responseProfileID;
@property (copy) NSString *responseAuthorizationToken;

- (id)bagKey;
- (id)requiredKeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)handleResponseDictionary:(id)a0;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)messageBody;
- (void).cxx_destruct;
- (id)additionalMessageHeaders;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)payloadCanBeLogged;

@end
