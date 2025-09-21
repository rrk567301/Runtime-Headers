@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (void)cancel;
- (void)addCancelToken:(id)a0 withOperation:(id)a1;
- (id)init;
- (void)removeCancelToken:(id)a0;
- (void).cxx_destruct;
- (void)removeAllCancelTokens;

@end
