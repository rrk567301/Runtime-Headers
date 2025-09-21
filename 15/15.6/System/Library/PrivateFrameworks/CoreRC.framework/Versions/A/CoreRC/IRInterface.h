@class NSArray;
@protocol IRInterfaceDelegate;

@interface IRInterface : CoreRCInterface

@property (nonatomic) id<IRInterfaceDelegate> delegate;
@property (nonatomic) char isTxInterface;
@property (nonatomic) char isRxInterface;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) unsigned long long maxStoredCommands;
@property (readonly, nonatomic) char canWakeFor3rdPartyIR;

- (id)buttons;
- (char)processTimings:(const unsigned int *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 timestamp:(unsigned long long)a2;
- (char)canWakeFor3rdPartyIR;
- (char)clearAllStoredCommands:(id *)a0;
- (char)disableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (char)enableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (unsigned long long)maxStoredCommands;
- (void)receivedCommand:(id)a0;
- (void)receivedFrame:(id)a0;
- (char)resetAllButtons:(id *)a0;
- (char)setCommand:(id)a0 forButtonCombination:(id)a1 delay:(double)a2 error:(id *)a3;
- (char)setLearnedProtocolMask:(unsigned int)a0 error:(id *)a1;
- (char)setPairState:(char)a0 forDeviceUID:(unsigned char)a1 error:(id *)a2;
- (char)transmitCommand:(id)a0 pressDuration:(double)a1 error:(id *)a2;
- (char)transmitFrame:(id)a0 error:(id *)a1;

@end
