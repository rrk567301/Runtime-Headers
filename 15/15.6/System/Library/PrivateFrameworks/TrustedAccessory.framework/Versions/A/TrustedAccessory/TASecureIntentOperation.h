@class NSData;
@protocol TASecureIntentOperationDelegate;

@interface TASecureIntentOperation : TAOperation

@property (copy, nonatomic) NSData *credentialSet;
@property (nonatomic) char stopOnIntent;
@property (weak, nonatomic) id<TASecureIntentOperationDelegate> delegate;

- (void).cxx_destruct;
- (char)startWithError:(id *)a0;
- (void)notification:(unsigned int)a0 withData:(id)a1;

@end
