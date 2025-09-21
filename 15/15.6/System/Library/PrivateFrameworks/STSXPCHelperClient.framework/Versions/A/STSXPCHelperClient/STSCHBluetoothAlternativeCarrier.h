@class NSData;

@interface STSCHBluetoothAlternativeCarrier : STSCHAlternativeCarrier

@property (retain, nonatomic) NSData *leAddr;
@property (readonly, nonatomic) NSData *humanReadableLEAddress;
@property (retain, nonatomic) NSData *advertiseUUID;
@property (retain, nonatomic) NSData *humanReadableAdvertiseUUID;
@property (nonatomic) unsigned long long leRole;

+ (char)supportsSecureCoding;
+ (id)connectionHandoverAlternativeCarrierWithBundle:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)roleString;
- (id)initWithAddress:(id)a0 advertiseUUID:(id)a1 role:(unsigned long long)a2 powerState:(unsigned long long)a3 auxiliaryRecords:(id)a4;
- (id)_createCarrierConfigurationRecord;
- (id)initWithNdefRecordBundle:(id)a0;
- (unsigned long long)roleFromSpec:(unsigned char)a0;
- (unsigned char)specRole;

@end
