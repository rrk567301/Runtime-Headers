@class NSString, NSDate;

@interface CWFLinkChangeStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic, getter=isLinkDown) BOOL linkDown;
@property (nonatomic, getter=isInvoluntaryLinkDown) BOOL involuntaryLinkDown;
@property (nonatomic) int reason;
@property (nonatomic) long long subreason;
@property (nonatomic) long long RSSI;
@property (nonatomic) long long noise;
@property (nonatomic) float CCA;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToLinkChangeStatus:(id)a0;

@end
