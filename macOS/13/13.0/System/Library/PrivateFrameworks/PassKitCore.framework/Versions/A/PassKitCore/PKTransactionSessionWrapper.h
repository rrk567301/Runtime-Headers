@class STSSession;
@protocol NFSession;

@interface PKTransactionSessionWrapper : NSObject {
    unsigned long long _firstInQueue;
}

@property (readonly, nonatomic) id<NFSession> nfSession;
@property (readonly, nonatomic) STSSession *stsSession;
@property (nonatomic, getter=isFirstInQueue) BOOL firstInQueue;

- (void).cxx_destruct;
- (void)endSession;
- (id)initWithNFSession:(id)a0;
- (id)initWithSTSSession:(id)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;

@end
