@class LACDTOBiometryWatchdog;

@interface LACDTOBiometryWatchdogPack : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) LACDTOBiometryWatchdog *biometryWatchdogGlobal;
@property (readonly, nonatomic) LACDTOBiometryWatchdog *biometryWatchdogDTO;
@property (readonly, nonatomic) char isBarking;

+ (id)nullInstance;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBiometryWatchdogGlobal:(id)a0 biometryWatchdogDTO:(id)a1;

@end
