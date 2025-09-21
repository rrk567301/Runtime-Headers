@class NSString, NSDictionary, NSData, NSURL, NSArray;

@interface ISURLRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSData *body;
@property (retain) NSString *method;
@property (retain) NSDictionary *queryStringDictionary;
@property (readonly) NSURL *primaryURL;
@property (retain) NSArray *URLs;
@property double timeoutInterval;
@property char retryAfterTimeout;
@property (readonly) char resourceRequest;
@property unsigned long long cachePolicy;
@property char preventsIdleSystemSleep;
@property char suppressADIHeaders;
@property (retain) NSDictionary *customHeaders;
@property char alwaysSendGUID;

+ (id)requestWithURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)setValue:(id)a0 forHeaderField:(id)a1;
- (id)initWithURLRequest:(id)a0;
- (id)newURLRequestWithURL:(id)a0 storeAccount:(id)a1 serviceProxy:(id)a2;
- (void)setValue:(id)a0 forQueryStringParameter:(id)a1;

@end
