@class NSString;

@interface BGContinuedProcessingTaskContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long topology;
@property (readonly, nonatomic) long long executionContext;
@property (readonly, nonatomic) struct { unsigned int val[8]; } hostAppAuditToken;
@property (readonly, copy, nonatomic) NSString *hostAppBundleIdentifier;

+ (id)standardContext;
+ (id)proxyContextForApp:(id)a0;
+ (id)proxyContextForAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTopology:(long long)a0 hostAppAuditToken:(struct { unsigned int x0[8]; })a1;
- (id)initWithTopology:(long long)a0 hostAppBundleIdentifier:(id)a1;

@end
