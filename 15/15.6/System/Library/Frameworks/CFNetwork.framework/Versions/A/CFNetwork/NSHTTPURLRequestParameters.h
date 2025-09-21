@class NSString, NSMutableDictionary, NSArray, NSData;

@interface NSHTTPURLRequestParameters : NSObject <NSCoding> {
    NSString *method;
    NSMutableDictionary *fields;
    NSArray *extraCookies;
    NSData *data;
    unsigned long long pageNotFoundCacheLifetime;
    char shouldHandleCookies;
    char _pad1;
    char _pad2;
    char _pad3;
}

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
