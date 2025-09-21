@class NSString, SOAuthorizationParametersCore, NSURL, NSDictionary, NSData;

@interface SOAuthorizationParameters : NSObject {
    SOAuthorizationParametersCore *_authorizationParametersCore;
}

@property (readonly, nonatomic) SOAuthorizationParametersCore *authorizationParametersCore;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *operation;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic) char useInternalExtensions;
@property (nonatomic) long long responseCode;
@property (nonatomic, getter=isCFNetworkInterception, setter=setCFNetworkInterception:) char cfNetworkInterception;
@property (copy, nonatomic) NSString *impersonationBundleIdentifier;
@property (nonatomic, getter=canShowOnCoverScreen) char showOnCoverScreen;

- (id)init;
- (void).cxx_destruct;

@end
