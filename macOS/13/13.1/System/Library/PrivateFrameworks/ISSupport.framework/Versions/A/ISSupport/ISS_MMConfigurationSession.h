@interface ISS_MMConfigurationSession : NSObject <ISS_MMTransactionGenerator> {
    id _delegate;
    BOOL _use_synchronous;
    id _session_data;
}

+ (id)configurationSession;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (BOOL)isSynchronous;
- (void)setIsSynchronous:(BOOL)a0;
- (void)setTransactionDelegate:(id)a0;
- (id)transactionDelegate;
- (id)getDataAtPath:(id)a0;
- (id)getDataAtPath:(id)a0 ifModifiedSince:(id)a1;
- (id)_dispatchRequest:(id)a0 withPostHandler:(SEL)a1 requiringResult:(BOOL)a2;
- (id)_getConfigRequestPostHandler:(id)a0;

@end
