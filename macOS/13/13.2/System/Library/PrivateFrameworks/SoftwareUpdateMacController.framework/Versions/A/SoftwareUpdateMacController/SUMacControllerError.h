@interface SUMacControllerError : NSObject

+ (id)nameForErrorCode:(long long)a0;
+ (id)buildErrorWithCode:(long long)a0 description:(id)a1;
+ (id)buildErrorWithCode:(long long)a0 underlying:(id)a1 description:(id)a2;
+ (void)sanitizeError:(id *)a0;
+ (id)localizedErrorStringForCode:(long long)a0;

@end
