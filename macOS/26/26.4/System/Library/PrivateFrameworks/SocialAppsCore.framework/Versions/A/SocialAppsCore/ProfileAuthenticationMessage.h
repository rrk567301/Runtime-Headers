@class NSString;

@interface ProfileAuthenticationMessage : ProfileMessage <NSCopying>

@property (copy) NSString *username;
@property (copy) NSString *password;
@property (copy) NSString *responseProfileID;
@property (copy) NSString *responseAuthorizationToken;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;
- (id)requiredKeys;
- (id)additionalMessageHeaders;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)payloadCanBeLogged;

@end
