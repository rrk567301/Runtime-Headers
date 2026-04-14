@class NSString, NSNumber, NSDictionary;

@interface HAPSocketInfo : HMFObject

@property (readonly, nonatomic) NSString *ipAddressString;
@property (readonly, nonatomic) NSNumber *port;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *shortDescription;

+ (id)shortDescription;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSocket:(const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a0;
- (id)initWithIPAddressString:(id)a0 port:(id)a1;

@end
