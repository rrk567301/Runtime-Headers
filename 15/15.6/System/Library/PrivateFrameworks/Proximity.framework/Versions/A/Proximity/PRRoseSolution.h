@interface PRRoseSolution : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) unsigned long long mac_addr;
@property (readonly, nonatomic) double mach_absolute_time_sec;
@property (readonly, nonatomic) char mach_continuous_time_valid;
@property (readonly, nonatomic) double mach_continuous_time_sec;
@property (readonly, nonatomic) double range_m;
@property (readonly, nonatomic) double range_unc_m;
@property (readonly, nonatomic) char az_valid;
@property (readonly, nonatomic) char el_valid;
@property (readonly, nonatomic) double az_deg;
@property (readonly, nonatomic) double el_deg;
@property (readonly, nonatomic) double az_unc_deg;
@property (readonly, nonatomic) double el_unc_deg;
@property (readonly, nonatomic) double fov_confidence;
@property (readonly, nonatomic) char soi_rssi_valid;
@property (readonly, nonatomic) double soi_rssi_dbm;
@property (readonly, nonatomic) long long antenna_type;
@property (readonly, nonatomic) char previous_solution_is_bad;
@property (readonly, nonatomic) char track_score_valid;
@property (readonly, nonatomic) double track_score;
@property (readonly, nonatomic) char sweep_angle_valid;
@property (readonly, nonatomic) double sweep_angle_deg;
@property (readonly, nonatomic) char multipath_probability_valid;
@property (readonly, nonatomic) double multipath_probability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVariant:(long long)a0 macAddr:(unsigned long long)a1 machAbsTime_sec:(double)a2 machContTimeValid:(char)a3 machContTime_sec:(double)a4 range_m:(double)a5 rangeUnc_m:(double)a6 azValid:(char)a7 elValid:(char)a8 az_deg:(double)a9 el_deg:(double)a10 azUnc_deg:(double)a11 elUnc_deg:(double)a12 fovConfidence:(double)a13 soiRssiValid:(char)a14 soiRssi_dBm:(double)a15 antennaType:(long long)a16 prevSolutionIsBad:(char)a17 trackScoreValid:(char)a18 trackScore:(double)a19 sweepAngleValid:(char)a20 sweepAngle_deg:(double)a21 multipathProbabilityValid:(char)a22 multipathProbability:(double)a23;

@end
