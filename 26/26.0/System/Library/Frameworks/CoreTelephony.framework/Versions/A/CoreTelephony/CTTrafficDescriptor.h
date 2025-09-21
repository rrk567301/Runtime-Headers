@class NSString, NSNumber;

@interface CTTrafficDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appCategory;
@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSNumber *llphs;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSNumber *portRangeLow;
@property (retain, nonatomic) NSNumber *portRangeUpper;
@property (retain, nonatomic) NSNumber *ipProtocol;
@property (retain, nonatomic) NSNumber *trafficClass;
@property (retain, nonatomic) NSString *dnn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
