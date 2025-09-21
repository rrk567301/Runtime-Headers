@class NSMutableArray;

@interface CTRadioFrequencyFrontEndScanData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long hwPrdId;
@property (nonatomic) unsigned long long hwSku;
@property (nonatomic) unsigned long long hwRev;
@property (nonatomic) unsigned long long hwHousing;
@property (nonatomic) char rfcInitPass;
@property (nonatomic) unsigned long long rfcHwid;
@property (nonatomic) unsigned long long rfcRev;
@property (nonatomic) unsigned long long rfcMmwHwid;
@property (nonatomic) unsigned long long rfcMmwRev;
@property (nonatomic) unsigned long long fr2TrxRev;
@property (nonatomic) char rffeScanPass;
@property (nonatomic) unsigned long long numExpectedDevices;
@property (nonatomic) unsigned long long numDetectedDevices;
@property (nonatomic) unsigned long long numMissingDevices;
@property (retain, nonatomic) NSMutableArray *rffeScanInfo;
@property (retain, nonatomic) NSMutableArray *missingRffeDevices;
@property (retain, nonatomic) NSMutableArray *missingAtDevices;
@property (retain, nonatomic) NSMutableArray *missingMmwDevices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
