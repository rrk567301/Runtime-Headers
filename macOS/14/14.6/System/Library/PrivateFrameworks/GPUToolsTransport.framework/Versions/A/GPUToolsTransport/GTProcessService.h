@class GTProcessInfo, GTServiceProperties;

@interface GTProcessService : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GTServiceProperties *serviceProperties;
@property (readonly, nonatomic) GTProcessInfo *processInfo;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithService:(id)a0 processInfo:(id)a1;

@end
