@interface CalExchangeErrorMessage : NSObject

+ (BOOL)setError:(id *)a0 description:(id)a1 reason:(id)a2 code:(long long)a3 responseCode:(long long)a4;
+ (id)localizedStringFromErrorCode:(long long)a0;
+ (BOOL)setError:(id *)a0 description:(id)a1 reason:(id)a2 code:(long long)a3;

@end
