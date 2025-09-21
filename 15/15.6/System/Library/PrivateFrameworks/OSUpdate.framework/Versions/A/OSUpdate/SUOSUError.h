@interface SUOSUError : NSObject

+ (id)errorWithCode:(unsigned long long)a0;
+ (id)_localizedStringForKey:(id)a0;
+ (char)errorCodeIsPostLogoutError:(unsigned long long)a0;
+ (char)errorIsNetworkRequiredError:(id)a0;
+ (char)errorIsUserCancelledError:(id)a0;
+ (id)errorWithCode:(unsigned long long)a0 underlyingError:(id)a1 userInfo:(id)a2;
+ (id)localizedDescriptionForErrorCode:(unsigned long long)a0;
+ (id)localizedRecoverySuggestionForErrorCode:(unsigned long long)a0;

@end
