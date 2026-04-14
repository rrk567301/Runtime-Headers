@class NSDictionary;

@interface CRKWiProxDeviceRegistration : NSObject

@property (copy, nonatomic) NSDictionary *devices;
@property (copy, nonatomic) NSDictionary *options;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
