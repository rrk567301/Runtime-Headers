@class NSString, NSArray, NSData, NSError;

@interface CredentialUpdaterShim : NSObject

+ (void)signalAllAcceptedCredentialsWithRelyingPartyIdentifier:(NSString *)a0 userHandle:(NSData *)a1 acceptedCredentialIDs:(NSArray *)a2 completionHandler:(void (^)(NSError *))a3;
+ (void)signalCurrentUserDetailsWithRelyingPartyIdentifier:(NSString *)a0 userHandle:(NSData *)a1 newName:(NSString *)a2 completionHandler:(void (^)(NSError *))a3;
+ (void)signalUnknownCredentialWithRelyingPartyIdentifier:(NSString *)a0 credentialID:(NSData *)a1 completionHandler:(void (^)(NSError *))a2;

- (id)init;

@end
