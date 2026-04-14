@class NSString;

@interface ProfileAuthenticationMessage : ProfileMessage <NSCopying>

@property (copy) NSString *username;
@property (copy) NSString *password;
@property (copy) NSString *responseProfileID;
@property (copy) NSString *responseAuthorizationToken;

- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)requiredKeys;
- (id)bagKey;
- (id)additionalMessageHeaders;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)payloadCanBeLogged;

@end
