@class W5SummaryRecoveries, NSArray, W5SummaryLinkTests, W5AWDLStatus, W5BluetoothStatus, W5NetworkStatus, W5WiFiStatus, W5PowerStatus, W5SummaryFaults;

@interface W5Status : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) W5WiFiStatus *wifi;
@property (copy, nonatomic) W5AWDLStatus *awdl;
@property (copy, nonatomic) W5BluetoothStatus *bluetooth;
@property (copy, nonatomic) W5NetworkStatus *network;
@property (copy, nonatomic) W5PowerStatus *power;
@property (copy, nonatomic) NSArray *diagnosticsModes;
@property (copy, nonatomic) W5SummaryFaults *lastHrFaults;
@property (copy, nonatomic) W5SummaryLinkTests *lastHrLinkTests;
@property (copy, nonatomic) W5SummaryRecoveries *lastHrRecoveries;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToStatus:(id)a0;

@end
