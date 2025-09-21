@interface CoreIRDeviceClient : CoreIRDevice

+ (char)supportsSecureCoding;

- (Class)classForCoder;
- (char)sendCommand:(id)a0 error:(id *)a1;
- (char)updateMappingWithSession:(id)a0 error:(id *)a1;
- (char)changeButtonCombination:(id)a0 delay:(double)a1 enabled:(char)a2 error:(id *)a3;
- (char)clearAllStoredCommands:(id *)a0;
- (char)disableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (char)enableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (char)setCommand:(unsigned long long)a0 target:(id)a1 forButtonCombination:(id)a2 delay:(double)a3 error:(id *)a4;
- (char)setOSDName:(id)a0 error:(id *)a1;
- (id)startLearningSessionWithReason:(unsigned long long)a0 error:(id *)a1;

@end
