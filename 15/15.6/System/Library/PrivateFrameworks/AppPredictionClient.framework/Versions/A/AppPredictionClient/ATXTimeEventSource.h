@class NSString, NSURL;

@interface ATXTimeEventSource : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)initWithType:(long long)a0 bundleId:(id)a1 url:(id)a2;

@end
