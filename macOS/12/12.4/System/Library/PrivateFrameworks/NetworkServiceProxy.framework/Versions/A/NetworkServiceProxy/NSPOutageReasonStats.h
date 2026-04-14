@class NSString;

@interface NSPOutageReasonStats : NSPProxyAnalytics <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *tierType;
@property (retain, nonatomic) NSString *outageReasonType;
@property (retain, nonatomic) NSString *outageReasonSubType;
@property (retain, nonatomic) NSString *primaryIngressProxy;
@property (retain, nonatomic) NSString *primaryEgressProxy;
@property (retain, nonatomic) NSString *fallbackIngressProxy;
@property (retain, nonatomic) NSString *fallbackEgressProxy;
@property (retain, nonatomic) NSString *odohProxy;
@property (retain, nonatomic) NSString *tokenProxy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)eventName;
- (id)analyticsDict;

@end
