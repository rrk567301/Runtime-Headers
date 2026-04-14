@interface PTPCancelPacket : NSObject {
    unsigned int _transactionID;
}

- (id)description;
- (unsigned int)transactionID;
- (void)setTransactionID:(unsigned int)a0;
- (id)contentForTCP;
- (id)initWithTCPBuffer:(void *)a0;
- (id)initWithTransactionID:(unsigned int)a0;

@end
