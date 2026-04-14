@class BKIdentity, NSData;
@protocol BKExtendEnrollTouchIDOperationDelegate;

@interface BKExtendEnrollTouchIDOperation : BKOperation

@property (weak, nonatomic) id<BKExtendEnrollTouchIDOperationDelegate> delegate;
@property (retain, nonatomic) BKIdentity *identity;
@property (copy, nonatomic) NSData *credentialSet;

- (void).cxx_destruct;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)homeButtonPressed:(unsigned long long)a0;
- (void)startBioOperation:(BOOL)a0 reply:(id /* block */)a1;

@end
