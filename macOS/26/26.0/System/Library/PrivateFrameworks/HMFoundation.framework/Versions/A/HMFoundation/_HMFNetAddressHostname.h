@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal

@property (readonly, copy, nonatomic) NSString *hostname;

+ (id)normalizedHostname:(id)a0;

- (id)addressString;
- (id)init;
- (id)initWithHostname:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
