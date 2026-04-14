@class CDPEscrowRecordViability;

@interface CDPEscrowRecordReport : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CDPEscrowRecordViability *deviceViability;

- (id)initWithDefaultValues;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceStatus:(id)a0;
- (id)updatedReportWithRecord:(id)a0;

@end
