@class NSDictionary;

@interface CRKWiProxDeviceRegistration : NSObject

@property (copy, nonatomic) NSDictionary *devices;
@property (copy, nonatomic) NSDictionary *options;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
