@interface PTPCancelPacket : NSObject {
    unsigned int _transactionID;
}

- (void)setTransactionID:(unsigned int)a0;
- (id)description;
- (unsigned int)transactionID;
- (id)contentForTCP;
- (id)initWithTCPBuffer:(void *)a0;
- (id)initWithTransactionID:(unsigned int)a0;

@end
