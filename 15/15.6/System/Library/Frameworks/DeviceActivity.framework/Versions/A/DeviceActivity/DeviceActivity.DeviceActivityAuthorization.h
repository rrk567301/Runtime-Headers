@class NSArray;

@interface DeviceActivity.DeviceActivityAuthorization : NSObject <DeviceActivity.DeviceActivityAuthorizing>

@property (class, nonatomic, readonly) char isAuthorized;
@property (class, nonatomic, readonly) NSArray *authorizedClientIdentifiers;
@property (class, nonatomic, readonly) char sharingEnabled;
@property (class, nonatomic) char isOverridden;

+ (char)isAuthorized:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
