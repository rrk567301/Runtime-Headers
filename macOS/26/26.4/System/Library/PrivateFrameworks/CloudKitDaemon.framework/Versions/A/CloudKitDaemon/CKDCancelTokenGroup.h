@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling>

@property (retain, nonatomic) NSMutableArray *cancelTokens;

- (void)removeCancelToken:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)removeAllCancelTokens;
- (id)init;
- (void)addCancelToken:(id)a0 withOperation:(id)a1;

@end
