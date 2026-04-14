@class LACDTOBiometryWatchdogPack, LACDTORatchetState;

@interface LACDTORatchetStateWithWatchdogs : NSObject

@property (readonly, nonatomic) LACDTORatchetState *ratchetState;
@property (readonly, nonatomic) LACDTOBiometryWatchdogPack *watchdogs;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRatchetState:(id)a0 watchdogs:(id)a1;

@end
