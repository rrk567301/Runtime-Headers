@interface CDPEscrowRecordViability : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasMachineId;
@property (readonly, nonatomic) BOOL hasRecords;
@property (readonly, nonatomic) unsigned long long recordViability;
@property (readonly, nonatomic) unsigned long long tlkRecoveryViability;
@property (readonly, nonatomic) unsigned long long pcsRecoveryViability;
@property (readonly, nonatomic) unsigned long long sosViability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecordPresence:(BOOL)a0 recordViability:(unsigned long long)a1 tlkRecoveryViability:(unsigned long long)a2 sosViability:(unsigned long long)a3 pcsRecoveryViability:(unsigned long long)a4;

@end
