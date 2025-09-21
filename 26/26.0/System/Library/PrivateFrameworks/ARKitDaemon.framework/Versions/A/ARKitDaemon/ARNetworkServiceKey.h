@class NSString;

@interface ARNetworkServiceKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *networkingServiceName;

+ (id)keyForDeviceID:(id)a0 networkingServiceName:(id)a1;
+ (id)keyForService:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceID:(id)a0 networkingServiceName:(id)a1;

@end
