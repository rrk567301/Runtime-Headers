@interface PTPCancelPacket : NSObject {
    unsigned int _transactionID;
}

- (unsigned int)transactionID;
- (void)setTransactionID:(unsigned int)a0;
- (id)description;
- (id)contentForTCP;
- (id)initWithTCPBuffer:(void *)a0;
- (id)initWithTransactionID:(unsigned int)a0;

@end
