@interface CWBTCStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char coexEnabled;
@property (nonatomic) char tdmEnabled;
@property (nonatomic) char hybridEnabled;
@property (nonatomic) long long btAntennaRequestsCount;
@property (nonatomic) long long btAntennaGrantCount;
@property (nonatomic) long long btAntennaGrantDurationMicroseconds;
@property (nonatomic) long long btAbortCount;
@property (nonatomic) char antennaRequestedDueToACL;
@property (nonatomic) char antennaRequestedDueToSCO;
@property (nonatomic) char antennaRequestedDueToeSCO;
@property (nonatomic) char antennaRequestedDueToA2DP;
@property (nonatomic) char antennaRequestedDueToSniff;
@property (nonatomic) char antennaRequestedDueToPageScan;
@property (nonatomic) char antennaRequestedDueToInquiryScan;
@property (nonatomic) char antennaRequestedDueToPage;
@property (nonatomic) char antennaRequestedDueToInquiry;
@property (nonatomic) char antennaRequestedDueToBLE;
@property (nonatomic) char antennaRequestedDueToOther;
@property (nonatomic) long long psnullRetryCountExceededCount;
@property (nonatomic) long long ucodeHighLatencyDetectedCount;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)update;
- (char)IsEqualToBTCStatus:(id)a0;
- (id)__getSampleDictionary;

@end
