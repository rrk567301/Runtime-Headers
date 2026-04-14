@class NSString;

@interface _HMFNetAddressHostname : HMFNetAddressInternal

@property (readonly, copy, nonatomic) NSString *hostname;

+ (id)normalizedHostname:(id)a0;

- (id)addressString;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithHostname:(id)a0;

@end
