@class NSString, NSDate;

@interface CWFLinkChangeStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic, getter=isLinkDown) char linkDown;
@property (nonatomic, getter=isLinkDownDebounceInProgress) char linkDownDebounceInProgress;
@property (nonatomic, getter=isInvoluntaryLinkDown) char involuntaryLinkDown;
@property (nonatomic) int reason;
@property (nonatomic) long long subreason;
@property (nonatomic) long long RSSI;
@property (nonatomic) long long noise;
@property (nonatomic) unsigned long long CCA;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToLinkChangeStatus:(id)a0;

@end
