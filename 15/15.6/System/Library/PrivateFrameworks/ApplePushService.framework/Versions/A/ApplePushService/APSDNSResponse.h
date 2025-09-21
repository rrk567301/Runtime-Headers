@class NSString, NSArray;

@interface APSDNSResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) NSArray *ipv4Address;
@property (readonly, nonatomic) NSArray *ipv6Address;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initResponseForHostname:(id)a0 ipv4Address:(id)a1 ipv6Address:(id)a2;

@end
