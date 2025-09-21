@class NSData;
@protocol TASecureIntentOperationDelegate;

@interface TASecureIntentOperation : TAOperation

@property (copy, nonatomic) NSData *credentialSet;
@property (nonatomic) BOOL stopOnIntent;
@property (weak, nonatomic) id<TASecureIntentOperationDelegate> delegate;

- (BOOL)startWithError:(id *)a0;
- (void).cxx_destruct;
- (void)notification:(unsigned int)a0 withData:(id)a1;

@end
