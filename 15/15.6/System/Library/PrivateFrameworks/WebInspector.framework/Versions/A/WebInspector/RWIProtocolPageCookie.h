@class NSString;

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double expires;
@property (nonatomic) char session;
@property (nonatomic) char httpOnly;
@property (nonatomic) char secure;
@property (nonatomic) long long sameSite;
@property (copy, nonatomic) NSString *partitionKey;

- (id)initWithName:(id)a0 value:(id)a1 domain:(id)a2 path:(id)a3 expires:(double)a4 session:(char)a5 httpOnly:(char)a6 secure:(char)a7 sameSite:(long long)a8;

@end
