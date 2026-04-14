@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal

@property (readonly, copy, nonatomic) NSString *hostname;

+ (id)normalizedHostname:(id)a0;

- (unsigned long long)hash;
- (id)addressString;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHostname:(id)a0;
- (id)init;

@end
