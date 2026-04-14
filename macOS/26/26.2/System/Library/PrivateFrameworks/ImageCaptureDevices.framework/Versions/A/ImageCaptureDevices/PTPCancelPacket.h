@interface PTPCancelPacket : NSObject {
    unsigned int _transactionID;
}

- (unsigned int)transactionID;
- (id)description;
- (void)setTransactionID:(unsigned int)a0;
- (id)contentForTCP;
- (id)initWithTCPBuffer:(void *)a0;
- (id)initWithTransactionID:(unsigned int)a0;

@end
