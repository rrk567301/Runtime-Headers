@class NSNumber, NSString, NSArray;

@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *pdp;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSString *apnName;
@property (nonatomic) unsigned int wirelessTechnologyMask;
@property (nonatomic) int state;
@property (nonatomic) int ipFamily;
@property (nonatomic) char suspended;
@property (nonatomic) char publicNetAllowed;
@property (nonatomic) int contextType;
@property (nonatomic) int transportType;
@property (retain, nonatomic) NSArray *qosFlows;
@property (retain, nonatomic) NSArray *trafficDescriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
