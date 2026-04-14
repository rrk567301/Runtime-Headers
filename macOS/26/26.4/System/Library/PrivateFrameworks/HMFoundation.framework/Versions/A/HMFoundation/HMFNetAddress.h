@class NSString, HMFNetAddressInternal;

@interface HMFNetAddress : HMFObject

@property (readonly, nonatomic) HMFNetAddressInternal *internal;
@property (readonly, nonatomic) unsigned long long addressFamily;
@property (readonly, copy, nonatomic) NSString *addressString;

+ (id)localAddress;

- (id)initWithHostname:(id)a0;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dataUsingEncoding:(unsigned long long)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
