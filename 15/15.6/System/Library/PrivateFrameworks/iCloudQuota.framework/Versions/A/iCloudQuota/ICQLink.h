@class NSString, NSDictionary, NSURL, NSData;

@interface ICQLink : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSURL *serverUIURL;
@property (readonly, nonatomic) NSURL *dynamicUIRouteURL;
@property (readonly, nonatomic) NSString *purchaseAttribution;
@property (retain, nonatomic) NSData *serverUIContent;
@property (copy, nonatomic) NSString *actionIdentifier;

+ (id)urlSession;
+ (id)linkWithText:(id)a0 action:(long long)a1 parameters:(id)a2;
+ (id)_icqDismissLinkForServerMessageParameters:(id)a0;
+ (void)addHeadersToRequest:(id)a0;
+ (void)addPOSTParams:(id)a0 toRequest:(id)a1;
+ (id)linkWithText:(id)a0 options:(long long)a1 action:(long long)a2 parameters:(id)a3;
+ (char)performAction:(long long)a0 parameters:(id)a1 options:(long long)a2;
+ (void)performAsyncHTTPPostCallWithURL:(id)a0 parameters:(id)a1;
+ (void)performHTTPGETCallWithParams:(id)a0 options:(long long)a1;
+ (void)performHTTPPOSTCallWithParams:(id)a0 options:(long long)a1;
+ (void)startDataTaskWithRequest:(id)a0;
+ (id)urlRequestWithParams:(id)a0 options:(long long)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(long long)a0;
- (char)performAction;
- (void)getCachedContentWithCompletion:(id /* block */)a0;
- (id)initWithText:(id)a0 action:(long long)a1 parameters:(id)a2;
- (char)hasServerUIAction;
- (id)initWithAction:(long long)a0 url:(id)a1;
- (id)initWithActionString:(id)a0;
- (id)initWithActionString:(id)a0 url:(id)a1;
- (id)initWithText:(id)a0 options:(long long)a1 action:(long long)a2 parameters:(id)a3;
- (char)performActionWithOptions:(long long)a0;

@end
