@class NSString;

@interface ProfileAuthenticationMessage : ProfileMessage <NSCopying>

@property (copy) NSString *username;
@property (copy) NSString *password;
@property (copy) NSString *responseProfileID;
@property (copy) NSString *responseAuthorizationToken;

- (id)bagKey;
- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (id)requiredKeys;
- (void)handleResponseDictionary:(id)a0;
- (id)additionalMessageHeaders;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)payloadCanBeLogged;

@end
