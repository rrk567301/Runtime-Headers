@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal

@property (readonly, copy, nonatomic) NSString *hostname;

+ (id)normalizedHostname:(id)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)addressString;
- (id)initWithHostname:(id)a0;

@end
