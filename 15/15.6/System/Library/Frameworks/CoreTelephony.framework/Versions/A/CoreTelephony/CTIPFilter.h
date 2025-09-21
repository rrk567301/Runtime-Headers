@class NSNumber, CTIPFilterEndpoint;

@interface CTIPFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long filterId;
@property (nonatomic) unsigned long long precedence;
@property (readonly, nonatomic) char isTcp;
@property (readonly, nonatomic) char isUdp;
@property (readonly, nonatomic) char isAnyIpProtocol;
@property (readonly, nonatomic) char isIpv4;
@property (readonly, nonatomic) char isIpv6;
@property (readonly, nonatomic) char isAnyIpFamilyProtocol;
@property (nonatomic) unsigned long long ipProtocol;
@property (nonatomic) unsigned long long ipFamilyProtocol;
@property (retain, nonatomic) CTIPFilterEndpoint *src;
@property (retain, nonatomic) CTIPFilterEndpoint *dst;
@property (retain, nonatomic) NSNumber *tos;
@property (retain, nonatomic) NSNumber *tosMask;
@property (retain, nonatomic) NSNumber *flowLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
