@class HMFWoBLEInfo, NSArray, NSString, HMFWoWLANInfo, NSDate, NSNumber;

@interface HMFConnectivityInfo : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMFWoBLEInfo *woBLEInfo;
@property (retain, nonatomic) NSArray *woWLANInfos;
@property (retain, nonatomic) NSNumber *woWLANDarkPollMinimumInterval;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) HMFWoWLANInfo *woWLANInfo;
@property (retain, nonatomic) NSDate *woWLANLastDarkPollDate;
@property (readonly, nonatomic) NSNumber *woWLANDarkPollMinimumIntervalInSeconds;
@property (readonly, nonatomic) unsigned char woWLANVersion;
@property (readonly, nonatomic) BOOL woWLANSupportsBSP;
@property (readonly, nonatomic) long long woWLANWakeUpTypeSupport;
@property (readonly, nonatomic) BOOL woWLANSupportsDarkPoll;

+ (id)connectivityInfoWithAccessoryIdentifier:(id)a0 wakeConfiguration:(id)a1;
+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccessoryIdentifier:(id)a0 woBLEInfo:(id)a1 woWLANInfos:(id)a2;
- (id)initWithAccessoryIdentifier:(id)a0 woBLEInfo:(id)a1 woWLANInfos:(id)a2 darkPollMinimumInterval:(id)a3;

@end
