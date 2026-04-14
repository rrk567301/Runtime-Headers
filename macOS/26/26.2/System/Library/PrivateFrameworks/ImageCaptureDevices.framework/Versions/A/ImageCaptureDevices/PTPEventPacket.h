@interface PTPEventPacket : NSObject {
    int _numParameters;
    unsigned short _eventCode;
    unsigned int _transactionID;
    unsigned int _parameters[3];
}

- (unsigned int)transactionID;
- (id)description;
- (void)setTransactionID:(unsigned int)a0;
- (id)initWithDictionary:(id)a0;
- (id)contentForUSB;
- (id)initWithUSBBuffer:(void *)a0;
- (id)contentForTCP;
- (id)contentForUSBUsingBuffer:(void *)a0 capacity:(unsigned int)a1;
- (unsigned short)eventCode;
- (id)eventPacketDictionary;
- (id)initWithEventCode:(unsigned short)a0 transactionID:(unsigned int)a1;
- (id)initWithEventCode:(unsigned short)a0 transactionID:(unsigned int)a1 parameter1:(unsigned int)a2;
- (id)initWithEventCode:(unsigned short)a0 transactionID:(unsigned int)a1 parameter1:(unsigned int)a2 parameter2:(unsigned int)a3;
- (id)initWithEventCode:(unsigned short)a0 transactionID:(unsigned int)a1 parameter1:(unsigned int)a2 parameter2:(unsigned int)a3 parameter3:(unsigned int)a4;
- (id)initWithTCPBuffer:(void *)a0;
- (unsigned int)parameter1;
- (unsigned int)parameter2;
- (unsigned int)parameter3;
- (void)setEventCode:(unsigned short)a0;
- (void)setParameter1:(unsigned int)a0;
- (void)setParameter2:(unsigned int)a0;
- (void)setParameter3:(unsigned int)a0;

@end
