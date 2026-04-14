@interface ABHTTPUserAgent : NSObject

+ (id)httpUserAgentString;
+ (id)buildHttpUserAgentString;
+ (id)buildSystemVersionString;
+ (id)buildFrameworkVersionString;

@end
