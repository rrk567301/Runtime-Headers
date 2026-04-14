@class NSTimer;

@interface HardcopyCableReplacement : NSObject {
    char *incomingDataBuffer;
    unsigned int incomingdataBufferSize;
    unsigned int incomingReadHead;
    unsigned int incomingWriteHead;
    BOOL transportIsOpen;
    id hcrpDelegate;
    unsigned char printerStatus;
    char *last1284ID;
    unsigned int idLen;
    unsigned int currentOffset;
    unsigned short transactionID;
    unsigned int pendingTransactionID;
    struct PDUQueueElement { char *x0; struct PDUQueueElement *x1; } *pduHead;
    struct PDUQueueElement { char *x0; struct PDUQueueElement *x1; } *pduTail;
    unsigned int numberOfRemoteCreditsGrantedSoFar;
    unsigned int numberOfRemoteCreditsSavedJustInCase;
    double waitTime;
    NSTimer *pduTimer;
    void /* function */ *eventListener;
    void *eventRefcon;
    char printer1284IDBuffer[8096];
}

@property (retain) id transport;

+ (id)stringForTokenFrom1284ID:(id)a0 token:(id)a1;
+ (id)hardcopyCableReplacement;
+ (id)hardcopyCableReplacementWith:(id)a0;
+ (id)manufacturerFrom1284ID:(id)a0;
+ (id)productFrom1284ID:(id)a0;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (int)softReset;
- (int)closeTransportConnection;
- (int)openConnection;
- (int)closeConnection;
- (id)initWithTransport:(id)a0;
- (int)setReadBufferSize:(unsigned int)a0;
- (int)openTransportConnection;
- (void)flushPDUQueue;
- (void)flushDataQueue;
- (unsigned short)transportConnectionMaximumTransferUnit;
- (int)requestCredits;
- (void)decrementLocalCreditCount:(unsigned int)a0;
- (int)writeOnTransport:(void *)a0 length:(unsigned int)a1 blocking:(BOOL)a2 numberOfWrittenBytes:(unsigned long long *)a3;
- (int)dequeueBytes:(char *)a0 length:(unsigned int)a1 deQueuedBytes:(unsigned long long *)a2;
- (int)vendCreditsToClient:(unsigned int)a0;
- (unsigned short)getNewValidTransactionID;
- (char *)buildPDU:(int)a0 transaction:(unsigned short)a1 paramterLength:(unsigned short)a2 parameters:(char *)a3;
- (int)sendPDU:(char *)a0;
- (unsigned int)readBufferSize;
- (int)enqueueBytes:(char *)a0 length:(unsigned int)a1;
- (unsigned int)nBytesInQueue;
- (void)handleCreditOutOfSync;
- (void)delayedRequestForCredits:(id)a0;
- (char *)dequeuePDU;
- (void)pduSent:(char *)a0;
- (BOOL)mustEnqueuePDU;
- (int)enqueuePDU:(char *)a0;
- (int)transportSendPDU:(char *)a0;
- (void)timerAction:(id)a0;
- (int)processPDU:(int)a0 transaction:(unsigned short)a1 paramterLength:(unsigned short)a2 status:(int)a3 parameters:(char *)a4;
- (int)handleCatastrophicError:(id)a0;
- (void)processIncomingCredits:(unsigned int)a0;
- (int)openConnectionWith:(id)a0;
- (unsigned short)connectionMaximumTransferUnit;
- (int)write:(void *)a0 length:(unsigned long long)a1 numberOfWrittenBytes:(unsigned long long *)a2;
- (int)read:(void *)a0 length:(unsigned long long)a1 numberOfReadBytes:(unsigned long long *)a2;
- (int)peek:(void *)a0 length:(unsigned long long)a1 numberOfReadBytes:(unsigned long long *)a2;
- (int)printerStatus:(char *)a0;
- (int)get1284ID:(char *)a0;
- (int)hardReset;
- (int)setupAndValidateTransportConnection:(int)a0;
- (void)writeDataCompleted:(int)a0;
- (int)processNewData:(char *)a0 length:(unsigned int)a1;
- (unsigned int)numberOfRemoteCreditsGrantedSoFar;
- (int)returnsUnusedCredits;
- (unsigned int)removeAllPDUsOfType:(int)a0;
- (int)receivePDU:(char *)a0;
- (int)setEventCallBack:(void /* function */ *)a0 refCon:(void *)a1;

@end
