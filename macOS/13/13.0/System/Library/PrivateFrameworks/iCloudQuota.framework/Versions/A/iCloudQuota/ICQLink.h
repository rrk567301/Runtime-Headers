@class NSString, NSDictionary, NSURL;

@interface ICQLink : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSURL *remoteUIURL;
@property (readonly, nonatomic) NSURL *dynamicUIRouteURL;
@property (readonly, nonatomic) NSString *purchaseAttribution;

+ (id)urlSession;
+ (id)linkWithText:(id)a0 action:(long long)a1 parameters:(id)a2;
+ (id)linkWithText:(id)a0 options:(long long)a1 action:(long long)a2 parameters:(id)a3;
+ (BOOL)performAction:(long long)a0 parameters:(id)a1 options:(long long)a2;
+ (id)urlRequestWithParams:(id)a0 options:(long long)a1;
+ (void)performHTTPPOSTCallWithParams:(id)a0 options:(long long)a1;
+ (void)performHTTPGETCallWithParams:(id)a0 options:(long long)a1;
+ (void)startDataTaskWithRequest:(id)a0;
+ (void)addHeadersToRequest:(id)a0;
+ (void)addPOSTParams:(id)a0 toRequest:(id)a1;

- (id)debugDescription;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performAction;
- (id)initWithText:(id)a0 action:(long long)a1 parameters:(id)a2;
- (id)initWithText:(id)a0 options:(long long)a1 action:(long long)a2 parameters:(id)a3;
- (BOOL)performActionWithOptions:(long long)a0;

@end
