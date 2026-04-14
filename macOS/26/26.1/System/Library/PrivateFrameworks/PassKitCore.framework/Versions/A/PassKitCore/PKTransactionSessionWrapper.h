@class STSSession;
@protocol NFSession;

@interface PKTransactionSessionWrapper : NSObject

@property (readonly, nonatomic) id<NFSession> nfSession;
@property (readonly, nonatomic) STSSession *stsSession;

- (void).cxx_destruct;
- (void)endSession;
- (id)init;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (id)initWithNFSession:(id)a0;
- (id)initWithSTSSession:(id)a0;

@end
