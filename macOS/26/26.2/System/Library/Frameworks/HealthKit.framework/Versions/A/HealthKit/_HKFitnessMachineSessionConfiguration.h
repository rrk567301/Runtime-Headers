@class NSUUID, NSString;

@interface _HKFitnessMachineSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSUUID *connectionUUID;
@property (readonly, nonatomic) NSUUID *machineUUID;
@property (readonly, nonatomic) unsigned long long machineType;
@property (readonly, nonatomic) NSString *machineName;
@property (readonly, nonatomic) NSString *machineBrand;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_setConnectionUUID:(id)a0;
- (void)_setMachineBrand:(id)a0;
- (void)_setMachineName:(id)a0;
- (void)_setMachineType:(unsigned long long)a0;
- (void)_setMachineUUID:(id)a0;
- (void)_setSessionUUID:(id)a0;

@end
