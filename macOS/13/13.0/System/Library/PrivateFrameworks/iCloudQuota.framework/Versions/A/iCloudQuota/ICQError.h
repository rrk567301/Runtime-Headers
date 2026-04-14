@interface ICQError : NSObject

+ (id)retryErrorWithRetryAfter:(id)a0;
+ (id)serviceUnavailableWithRetryAfter:(id)a0;
+ (id)_errorWithCode:(long long)a0 retryAfter:(id)a1;
+ (id)_retryAfterDelayFromString:(id)a0;
+ (id)_retryAfterDateFromString:(id)a0;
+ (id)_formatterForHTTPDate;

@end
