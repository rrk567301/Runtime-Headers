@interface PTPOperationRequestPacket : NSObject {
    int _numParameters;
    unsigned int _dataPhaseInfo;
    unsigned short _operationCode;
    unsigned int _transactionID;
    unsigned int _parameters[5];
}

- (id)description;
- (unsigned int)transactionID;
- (void)setTransactionID:(unsigned int)a0;
- (unsigned int)parameterAtIndex:(unsigned int)a0;
- (id)initWithTCPBuffer:(void *)a0;
- (id)initWithUSBBuffer:(void *)a0;
- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void *)a0 capacity:(unsigned int)a1;
- (int)numParameters;
- (void)setPparameter:(unsigned int)a0 atIndex:(unsigned int)a1;
- (unsigned int)parameter1;
- (void)setParameter1:(unsigned int)a0;
- (unsigned int)parameter2;
- (void)setParameter2:(unsigned int)a0;
- (unsigned int)parameter3;
- (void)setParameter3:(unsigned int)a0;
- (unsigned int)parameter4;
- (void)setParameter4:(unsigned int)a0;
- (unsigned int)parameter5;
- (void)setParameter5:(unsigned int)a0;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 dataPhaseInfo:(unsigned int)a2 numParameters:(unsigned int)a3 parameters:(unsigned int *)a4;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 dataPhaseInfo:(unsigned int)a2;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 dataPhaseInfo:(unsigned int)a2 parameter1:(unsigned int)a3;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 dataPhaseInfo:(unsigned int)a2 parameter1:(unsigned int)a3 parameter2:(unsigned int)a4;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 dataPhaseInfo:(unsigned int)a2 parameter1:(unsigned int)a3 parameter2:(unsigned int)a4 parameter3:(unsigned int)a5;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 dataPhaseInfo:(unsigned int)a2 parameter1:(unsigned int)a3 parameter2:(unsigned int)a4 parameter3:(unsigned int)a5 parameter4:(unsigned int)a6;
- (id)initWithOperationCode:(unsigned short)a0 transactionID:(unsigned int)a1 dataPhaseInfo:(unsigned int)a2 parameter1:(unsigned int)a3 parameter2:(unsigned int)a4 parameter3:(unsigned int)a5 parameter4:(unsigned int)a6 parameter5:(unsigned int)a7;
- (unsigned short)operationCode;
- (void)setOperationCode:(unsigned short)a0;
- (unsigned int)dataPhaseInfo;
- (void)setDataPhaseInfo:(unsigned int)a0;

@end
