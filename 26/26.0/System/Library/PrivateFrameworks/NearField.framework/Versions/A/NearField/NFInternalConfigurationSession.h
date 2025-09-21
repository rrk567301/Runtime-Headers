@protocol NFInternalConfigurationSessionDelegate;

@interface NFInternalConfigurationSession : NFSession

@property (weak) id<NFInternalConfigurationSessionDelegate> delegate;

- (void).cxx_destruct;
- (unsigned long long)_convertOperation:(unsigned long long)a0;
- (id)flashFirmware:(id)a0;
- (void)handlMFWNotification:(id)a0;
- (id)readRegister:(id)a0 operationType:(unsigned long long)a1 error:(id *)a2;
- (id)readRegisters:(id)a0 operationType:(unsigned long long)a1 error:(id *)a2;
- (id)sendMFGCommand:(unsigned char)a0 payload:(id)a1 response:(id)a2;
- (id)startContinuousWave;
- (id)startFieldDetect;
- (id)startLPCD;
- (id)startReader;
- (id)stopRF;
- (id)writeRegister:(id)a0 payload:(id)a1 operationType:(unsigned long long)a2;
- (id)writeRegisters:(id)a0 payloads:(id)a1 operationType:(unsigned long long)a2;

@end
