@class LACDTOBiometryWatchdog;

@interface LACDTOBiometryWatchdogPack : NSObject

@property (readonly, nonatomic) LACDTOBiometryWatchdog *biometryWatchdogGlobal;
@property (readonly, nonatomic) LACDTOBiometryWatchdog *biometryWatchdogDTO;
@property (readonly, nonatomic) BOOL isBarking;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBiometryWatchdogGlobal:(id)a0 biometryWatchdogDTO:(id)a1;

@end
